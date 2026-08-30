## GCC target for educational RISC-V processor

Guilherme Stabach Salustiano — orientador: Bruno de Carvalho Albertini
PCS / Escola Politécnica — USP, 2026

## Outline

1. Processador Hennessy-Patterson (background)
2. Motivação e objetivo
3. Trabalhos relacionados
4. Escopo / especificação dos 8 alvos
5. Pipeline do GCC e onde o backend age
6. Derivações de síntese (NOT, SLL, ...)
7. Tabela de custo das sínteses
8. Validação (4 camadas)
9. Resultados (custo estático e dinâmico)
10. Conclusão, trabalhos futuros, referências

### Hannessy-Patterson RISC-V Processor (Background)

-  O livro *Computer Organization and Design: RISC-V Edition* (Patterson & Hennessy)
  eh uma das referencias mais amplamente usados em cursos de arquitetura de computadores,
  sendo usado na materia de Systemas Digitais 2 aqui na poli
- O livro implementa um processador mono-ciclo com 8 intrucoes: `lw sw beq add addi sub and or`

[Figure 4.21 do hannersy e patterson]()


## Motivation & Objetivo (Introduction)

**Problema:**  
Todos os compiladores atuais geram ao minimo todas as intrucoes do RV32I: todos as instrucoes aritimeticas, de memoria, branches e PC.
Isso limita os programas rodados no hardware projetado para pequenos programas em assembly
a mao, distanciando o uso do C que ja estao familiariados, e postergando conceitos como a traducao e otimizacao de C para assembly. 
Devido ao pequeno subset suportado, os alunos precisam
escrever seus programas manualmente, limitando-os a pequenos codigos
e perdendo a oportunidade de interagir com compiladores.

<!-- **Por que importa.** Fecha o ciclo pedagógico hardware↔software: o aluno compila, -->
<!-- inspeciona o `-S` e vê concretamente um shift virar somas repetidas — o custo de -->
<!-- cada restrição de ISA fica tangível. E ele usa GCC de verdade (flags, ABI, ELF, -->
<!-- linker script), não um brinquedo didático. -->

## Objetivo
**Objetivo: **
Suportar a geracao de assembly a partir de codigo C com numero de instrucoes progressivas,
sintetizando toda instrucao ausente com uma sequencia equivalentes.

| Alvo | ISA |
|---|---|---|
| rvsc0 | `lw sw beq add addi sub and or`  |
| rvsc1 | + `lui`, `jalr` |
| rvsc2 | RV32I − fence − Zicsr − ecall/ebreak |
| rvsc3 | RV32I completo | 
| rvsc4 | RV64I | 
| rvsc5 | RV64IM | 
| rvsc6 | RV64IMFD +Zicsr | 
| rvsc7 | RV64IMAFD | 



## Related Work

- Berkeley SoftFloat package
- multi-bit shift for MSP430 with __mspabi_slli_n
- multiplecation suport for AVR with with __mulhi3 

## Desenvolvimento - GCC pipeline e backend

![](Figura steps do gcc)


## xor — caminho nativo (TARGET_XOR = 1)

`TARGET_XOR = 1` — o caminho normal, `riscv32-unknown-elf` ou `rvsc1 -mxor`.

**.c**

```c
int f(int a, int b) { return a ^ b; }
```

**Frontend** — árvore da linguagem: `XOR_EXPR (parm_decl a, parm_decl b)`.

**GIMPLE** independente de linguagem, ainda um único xor:

```c
D.2418 = a ^ b;
return D.2418;
```

**Expand** — o expand não faz nada, o `define_insn "*<optab><mode>3"` casa
direto e o RTL segue com **um** `xor:SI`:

```lisp
(insn 7 (set (reg:SI 137 [ _3 ])
        (xor:SI (reg/v:SI 135 [ a ]) (reg/v:SI 136 [ b ]))))
```

**Após alocação** — 1 instrução, 0 registradores extras:

```asm
f:
	xor	a0, a0, a1
	ret
```

## xor — sintetizado (TARGET_XOR = 0)

`rvsc1.h` injeta `-mno-xor` via `CC1_SPEC` ⇒ `TARGET_XOR = 0`. Mesmo `.c`,
mesma árvore, **mesmo GIMPLE** — nada muda até o expand.

**Expand**  — **é aqui que a síntese acontece.** O RTL nunca
contém um `xor:SI`: o `define_expand "<optab><mode>3"` é consultado antes de qualquer
`define_insn`, vê `!TARGET_XOR`, emite os três insns da identidade e chama `DONE`:

```lisp
(insn 7 (set (reg:SI 138) (and:SI (reg:SI 135 [a]) (reg:SI 136 [b]))))
(insn 8 (set (reg:SI 139) (ior:SI (reg:SI 135 [a]) (reg:SI 136 [b]))))
(insn 9 (set (reg:SI 137) (minus:SI (reg:SI 139) (reg:SI 138)))
     (expr_list:REG_EQUAL (xor:SI (reg:SI 135 [a]) (reg:SI 136 [b]))))
```

Dois pontos que valem o slide:

- **Dois pseudos** (138 e 139), não um reaproveitado: é o que dá ao IRA a aresta
  de fluxo de dados até o `sub`. A forma De Morgan anterior (`~(a&b) & (a|b)`)
  não tinha essa aresta, o IRA aliasou o resultado do NOT sobre um operando e
  corrompeu `a|b`.
- O `REG_EQUAL` preserva a semântica original para os passes seguintes
  (CSE, combine) sem que nenhum deles possa reintroduzir o `xor` — a instrução
  proibida simplesmente não existe mais no fluxo.

**Após alocação de registradores** (`-fdump-rtl-reload`) — os dois pseudos caem
em `a5` e no próprio `a0`; nenhum spill, o custo real é 1 registrador extra:

```asm
f:
	and	a5, a0, a1
	or	a0, a0, a1
	sub	a0, a0, a5
	ret
```

3 instruções nativas, todas no subconjunto de dez do sc1. O teste de ISA
(`tests/sc1/tests/isa/xor.c`, desmontado com `-M no-aliases`) prova que nenhum
`xor`/`xori` sobrou; o comportamental (`tests/sc1/tests/behav/logic.c`) prova que
o valor está certo.

## Synthesis Derivation - SLL

dinamico e estatico, worst case e tals

`sll rd, rs1, rs2` = `rs1 << rs2`.

**Prova por indução:** `sll(x,0) = x`; `sll(x,n+1) = sll(x,n) + sll(x,n)`.
Ou seja: shift à esquerda = **duplicações repetidas** (`add rd, rd, rd`).

**Contagem constante** (`x << 3`): o expand desenrola direto — exatamente `b`
instruções (≤ 31), sem laço, sem contador, sem back-edge.

```c
uint32_t sll (uint32_t rs1 , uint32_t rs2) {
  for (uint32_t rd = rs1, i = 0; i < rs2 ; i ++) rd += rd;
  return rd;
}
```

## Tabela do custo

Contagens **dinâmicas** (instruções retiradas, pior caso), medidas com
`synthesis_cost.py`: laço com barreira menos laço vazio sob `spike -g`, para o
overhead de laço e chamada cancelar exatamente.

| Operação | Pior caso | Regs extras |
|---|---|---|
| `not` | 2 | 0 |
| `xor` (reg / imm) | 3 / 4 | 1 / 2 |
| `ori` / `andi` | 2 | 1 |
| `sll` const / var | 31 / **47** | 0 / 1 |
| `srl` const / var | 158 / **332** | 3 |
| `sra` const / var | 194 / **391** | 5 / 7 |
| `slt` / `sltu` | 49 / 48 | 3 / 4 |
| `bne` | 3 | 1 |
| `blt`,`bltu` / `bge`,`bgeu` | 16 / 17 | 7 |
| `lui` (addi+shift, rvsc0) | 25 | 0 |
| `lb`/`lbu` | 77 lane conhecida / 460 desconhecida | 2 |
| `lh`/`lhu` | 85 / 532 | 2 |
| `sb` | 32 / 95 | 3 |
| `sh` | 23 / 82 | 3 |
| `jal` (rvsc1) | 5 por call site | 1 |
| `jump` rvsc0 / rvsc1 | 1 / 3 | 0 / 1 |

<!-- **Quatro leituras contraintuitivas que valem o slide:** -->

<!-- 1. **As linhas não somam.** `blt` custa 16 embora seja definido como `[slt]` -->
   <!-- (49) + `beq`. Um branch consome a comparação só como teste contra zero, -->
   <!-- então o `>>31` final que normalizaria para 0/1 é dobrado numa máscara de bit -->
   <!-- de sinal e a cadeia de 31 duplicações desaparece. `return a<b;` emite 49 -->
   <!-- instruções (32 delas construindo a máscara); `if (a<b) g=1;` emite 18. -->
   <!-- As linhas de comparação são pior caso **só da forma que produz valor**. -->
<!-- 2. **O pior caso de load sub-palavra é o endereço *alinhado*,** não o -->
   <!-- desalinhado: quanto menor o offset, menor o shift de extração e mais bits o -->
   <!-- `srl` sintetizado tem para caminhar. `lb` desconhecido: 460 no offset 0, -->
   <!-- 244 no offset 3. -->
<!-- 3. **O custo do shift depende do dado, não só da contagem:** `srl` por 1 custa -->
   <!-- 158 sobre um operando todo-um e 127 sobre zero (cada posição é um merge -->
   <!-- condicional). -->
<!-- 4. **"Lane conhecida" vs. "desconhecida" são duas sequências diferentes,** não -->
   <!-- um intervalo de operandos. Se o compilador resolve a posição do byte na -->
   <!-- palavra em tempo de compilação (global, slot de pilha, campo de struct), todo -->
   <!-- o `addr&3 → <<3 → shift variável` desaparece. Melhor caso: `lbu` alinhado -->
   <!-- custa **2** instruções, contra 460. É isso que explica a dispersão enorme do -->
   <!-- Embench. -->

<!-- Detalhes que sustentam a linha "lane conhecida": `MEM_ALIGN` é só *limite -->
<!-- inferior* (≥32 bits ⇒ lane 0; 16 bits não decide nada), então lanes não-zero vêm -->
<!-- de `get_object_alignment_1` (resíduo N mod M); `DATA_ALIGNMENT`/`LOCAL_ALIGNMENT` -->
<!-- alargam todo objeto estático/pilha para uma palavra (upstream só alarga -->
<!-- agregados, deixando `char` global permanentemente no caminho lento); e a -->
<!-- extração é escolhida por lane, porque shift à direita custa proporcional aos -->
<!-- bits que sobrevivem e à esquerda custa 1 `add` por posição. -->


## Validacao 2

**1. ISA Compliant**
`objdump -M no-aliases` e check das instrucoes

**2. Testes comportamentais auto-validantes (dinâmica, no Spike).**
Roda o progama contra um simulador e checa se os assert funcinam

## Validacao

-00..-0s

- 1. Smoke hand-written 240 cases test
- 2. GCC torture test suit
  - apenas o rvsc1

<GCC torture test suit table>

# Resultados torture testse

**Tortura (rvsc1):** 1669 passam e 15 são skipados em **cada** nível →
**8345 passam, 0 falham, 75 skip**. Nenhum skip por nome: 13 *declaram* um
pré-requisito que esta configuração freestanding não oferece
(`run_expensive_tests` 5, `c99_runtime` 3, `int128` 2, `mmap` 2, `dfp` 1) e 2 não
compilam (`__int128`, asm x87). **Nenhum tem relação com a ISA restrita** — e
isso é resolvido por comparação, não por argumento: uma toolchain `rv32i` padrão
falha os mesmos níveis do `20030125-1.c`.
**Varredura estática sobre a mesma suíte:** 8395 tentadas, **8360 produzem
objeto contendo só as dez instruções do sc1, zero ICE**; as 35 restantes são
rejeições de front-end em 4 causas. Com `--include-unsupported`, 8368 objetos,
todos limpos.

## Static cost

Embench-IoT (19 benchmarks), `.text` dos objetos próprios do benchmark a `-O2`
(bibliotecas são idênticas nas três toolchains e só diluiriam a razão).
Sem instruções comprimidas ⇒ razão de bytes = razão de contagem de instruções.
Três toolchains: **gcc17** (mesmo fork, triple `riscv32-unknown-elf`, sem flags
rvsc) / **rvsc2** (nativo) / **rvsc1** (sintetizado).

- **rvsc2 produz código idêntico ao gcc17 nos 19 benchmarks** — o alvo não
  custa nada quando nada é sintetizado.
- **rvsc1: média geométrica ×6,99**, de **×1,37 (`ud`)** a **×26,5
  (`nettle-aes`)**.
- A razão por benchmark segue quanto do trabalho *próprio* do benchmark o alvo
  não expressa direto: `ud` faz a aritmética dentro de rotinas de biblioteca;
  `nettle-aes` é uma cadeia de rotações de contagem constante e extrações de
  byte, cada uma desenrolando em código retilíneo.

## Dynamic cost

Instruções retiradas no Spike. **Todos os 19 benchmarks executam corretamente**
e todos entram na média.

- **Média geométrica ×15,8** — mais que o dobro da penalidade estática de ×6,99,
  porque as sínteses mais caras (shifts de contagem variável e os acessos
  sub-palavra construídos sobre eles) ficam dentro dos laços mais quentes: o
  custo é multiplicado por trip count, não por ocorrência estática.
- Faixa: **×3,5 (`matmult-int`)**, ×3,8 (`nsichneu`), ×5,9 (`statemate`) até
  **×59,2 (`xgboost`)** e ×50,1 (`tarfind`).
- As duas ordenações (estática e dinâmica) **não são a mesma**: `edn` é o único
  que custa mais em tamanho que em tempo; `ud` paga ×1,37 em tamanho contra
  ×39,1 em tempo. É essa dispersão de mais de uma ordem de magnitude que é a
  forma do resultado — não a média.
- `matmult-int` e `ud` deixaram de ser os casos quase-empatados de edições
  anteriores: agora pagam multiply/divide sintetizados no libgcc, que medições
  antigas evitavam ligando assembly que o alvo não executa.

**Mensagem:** o custo de uma instrução ausente não é um imposto fixo, é pago em
proporção a quanto o programa realmente precisa dela.

## Conclusao

- Os quatro objetivos foram cumpridos: `rvsc0` (oito instruções), `rvsc1`
  (convenção de chamada C completa com dez), `rvsc2`–`rvsc7` (RV32I →
  RV64IMAFD), e toda instrução ausente sintetizada de forma transparente ao
  programador.
- **Contribuição principal:** o conjunto de técnicas de síntese na machine
  description — de substituições de 1–2 instruções (NOT, variantes imediatas) a
  identidades multi-instrução (XOR, SLT, SLTU), sequências read-modify-write
  (LB/LBU/LH/LHU/SB/SH), shifts (SLL/SRL/SRA) e geração de código no call site
  (JAL), mais materialização addi/shift de constantes para `lui` no rvsc0. Cada
  uma derivada algebricamente e embutida como `define_expand`.
- **Contribuição secundária: a metodologia de validação.** Correto *por
  construção* (nenhum mnemônico proibido é emitido) e correto *por execução* (o
  valor computado é o que a semântica C exige). Vale registrar honestamente que
  isso **não valia antes desta medição**: a tortura falhava 36 combinações e dois
  outros defeitos estavam fora do alcance de qualquer suíte então existente —
  achados rodando um quarto corpus independente e recusando aceitar uma rodada
  falhada como número. As suítes delimitam onde a corretude foi demonstrada;
  alargar o corpus alargou o limite.
- **Custo:** ×6,99 estático e ×15,8 dinâmico (média geométrica, 19 benchmarks).
- **Para o uso pedagógico isso não desqualifica:** os programas de um curso
  introdutório (laços pequenos, shifts modestos, poucos acessos byte-granulares)
  caem na ponta barata das duas distribuições. E a dispersão larga é justamente
  o que torna o custo de cada restrição concreto: compilar o mesmo fonte para
  rvsc1 e rvsc2 e diffar o `-S` mostra em quantas instruções nativas um `sll`
  ou `sb` ausente se expande.

## Trabalho futuros

- **Formulação bitmask-and-recombine** para SRL/SRA: mover vários bits por
  passo em vez de um. É a única mudança grande que resta — os dois ganhos
  baratos já foram tomados (o shift à esquerda interno virou decomposição
  binária retilínea; o back-edge de laço virou `beq zero,zero` de uma
  instrução). Constantes estão em 158/194 e variáveis em 332/391, todos lineares
  na largura da palavra.
- **Empacotar como recurso de PCS3225:** binários pré-construídos, startup
  files, linker scripts e um Makefile que vai de `.c` a execução no Spike com um
  comando.
- **Estabilizar as flags e testar intermediarios**

## Referencias

- Patterson & Hennessy — *Computer Organization and Design: RISC-V Edition*,
  2ª ed., Morgan Kaufmann/Elsevier, 2020 (Cap. 4.4; Figura 4.21).
- RISC-V ISA Specification; RISC-V psABI.
- GCC Internals Manual (machine description, `.opt`, `CC1_SPEC`).
- Spike — simulador de referência de ISA RISC-V.
- Embench-IoT — suíte de benchmarks embarcados.

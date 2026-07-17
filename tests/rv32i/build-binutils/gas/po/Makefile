# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2026 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.46.50

SHELL = /bin/sh


srcdir = /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/po
top_srcdir = /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas
VPATH = /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/po
top_builddir = ..

prefix = /home/salust/p/scgcc/tests/rv32i/build/install
exec_prefix = ${prefix}
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gnulocaledir = ${prefix}/share/locale
gettextsrcdir = ${prefix}/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /nix/store/9ypz3flqsrl5xl495mm8h645gadjsxi1-coreutils-9.11/bin/install -c
INSTALL_DATA = /nix/store/9ypz3flqsrl5xl495mm8h645gadjsxi1-coreutils-9.11/bin/install -c -m 644
MKINSTALLDIRS = /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /nix/store/rb8rna9gkhs0ybl6z2p904myslh8llg8-gettext-1.0/bin/msgfmt
MSGFMT = /nix/store/rb8rna9gkhs0ybl6z2p904myslh8llg8-gettext-1.0/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /nix/store/rb8rna9gkhs0ybl6z2p904myslh8llg8-gettext-1.0/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2 -Wno-error=free-nonheap-object    
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/id.po $(srcdir)/ja.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/id.gmo $(srcdir)/ja.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/app.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/as.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/as.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/asintl.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/atof-generic.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/bignum.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/bit_fix.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/cgen.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/cgen.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/codeview.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/codeview.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/compress-debug.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/compress-debug.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/cond.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/atof-ieee.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/atof-vax.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/bfin-lex-wrapper.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/e-crisaout.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/e-criself.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/e-mipself.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/kvx-parse.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/kvx-parse.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-aout.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-aout.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-coff.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-coff.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-ecoff.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-ecoff.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-elf-attr.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-elf-attr.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-elf.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-elf.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-evax.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-evax.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-fdpicelf.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-fdpicelf.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-macho.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-macho.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-multi.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-multi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-som.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/obj-som.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-aarch64.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-aarch64.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-alpha.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-alpha.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-arc.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-arc.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-arm.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-arm.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-avr.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-avr.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-bfin.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-bfin.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-bpf.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-bpf.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-cr16.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-cr16.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-cris.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-cris.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-crx.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-crx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-csky.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-csky.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-d10v.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-d10v.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-d30v.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-d30v.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-dlx.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-dlx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-epiphany.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-epiphany.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-fr30.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-fr30.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-frv.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-frv.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ft32.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ft32.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-h8300.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-h8300.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-hppa.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-hppa.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-i386.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-i386.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ia64.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ia64.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ip2k.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ip2k.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-iq2000.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-iq2000.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-kvx.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-kvx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-lm32.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-lm32.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-loongarch.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m32c.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m32c.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m32r.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m32r.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m68hc11.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m68hc11.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m68k.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-m68k.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mcore.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mcore.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mep.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mep.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-metag.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-metag.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-microblaze.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-microblaze.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mips.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mips.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mmix.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mmix.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mn10200.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mn10200.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mn10300.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mn10300.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-moxie.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-msp430.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-msp430.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mt.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-mt.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-nds32.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-nds32.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ns32k.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ns32k.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-or1k.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-or1k.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pdp11.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pdp11.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pj.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pj.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ppc.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-ppc.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pru.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-pru.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-riscv.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-riscv.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-rl78.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-rl78.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-rx.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-rx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-s12z.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-s12z.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-s390.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-s390.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-score.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-score.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-sh.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-sh.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-sparc.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-sparc.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-spu.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-spu.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic30.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic30.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic4x.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic4x.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic54x.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic54x.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic6x.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tic6x.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tilegx.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tilegx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tilepro.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-tilepro.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-v850.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-v850.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-vax.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-vax.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-visium.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-visium.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-wasm32.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-wasm32.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xgate.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xgate.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xstormy16.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xstormy16.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xtensa.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-xtensa.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-z80.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-z80.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-z8k.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/tc-z8k.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-386bsd.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-aix5.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-armeabi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-armfbsdeabi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-armfbsdvfp.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-armlinuxeabi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-csky_abiv1.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-csky_abiv1_linux.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-csky_abiv2.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-csky_abiv2_linux.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-freebsd.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-generic.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-gnu.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-go32.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-hppa.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-hppa64.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-hppalinux64.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-interix.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-lynx.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-macos.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-nbsd.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-nbsd532.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-pc532mach.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-pe.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-solaris.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-tmips.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-vms.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-vxworks.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/te-wince-pe.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/xtensa-relax.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/config/xtensa-relax.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/depend.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/dw2gencfi.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/dw2gencfi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/dwarf2dbg.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/dwarf2dbg.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/ecoff.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/ecoff.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/ehopt.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/emul-target.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/emul.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/expr.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/expr.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/flonum-copy.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/flonum-konst.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/flonum-mult.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/flonum.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/frags.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/frags.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/gen-sframe.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/gen-sframe.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/ginsn.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/ginsn.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/hash.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/hash.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/input-file.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/input-file.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/input-scrub.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/itbl-lex.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/itbl-ops.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/itbl-ops.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/listing.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/listing.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/literal.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/macro.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/macro.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/messages.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/obj.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/output-file.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/output-file.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/read.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/read.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/remap.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/sb.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/sb.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/scfi.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/scfi.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/scfidw2gen.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/scfidw2gen.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/sframe-opt.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/stabs.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/subsegs.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/subsegs.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/symbols.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/symbols.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/tc.h \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/write.c \
     /home/salust/p/scgcc/tests/rv32i/../../binutils-gdb/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-dvi:
install-pdf:
install-ps:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:

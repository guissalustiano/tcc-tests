# latexmk configuration for the abntex2 edition.
#
# Kept here rather than in the justfile so that an editor's own latexmk, and
# Overleaf's, build the document the same way the justfile does.

# pdflatex directly, not the dvi -> ps -> pdf route.
$pdf_mode = 1;

# Run bibtex, and treat main.bbl as generated rather than as a source, so that
# `latexmk -C` removes it.  Without this latexmk finds the .bbl already present,
# decides it is an input, and leaves it behind on a full clean.
$bibtex_use = 2;

# Two of this document's outputs are not in latexmk's built-in clean list:
# memoir writes .loq for the list of quadros, and backref writes .brf.  Both
# would survive `latexmk -c`.
$clean_ext = 'loq brf run.xml synctex.gz';

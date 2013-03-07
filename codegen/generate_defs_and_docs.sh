#!/bin/bash

# gtkspellmm/codegen/generate_defs_and_docs.sh

# This script must be executed from directory gtkspellmm/codegen.

# Assumed directory structure:
#   codegen/extradefs/generate_extra_defs
#   codegen/tools/defs_gen/docextract_to_xml.py
#   codegen/tools/defs_gen/h2def.py
#   codegen/tools/enum.pl
#   ../../gtkspell/gtkspell/*.h
#   ../../gtkspell/gtkspell/*.c

# Generated files:
#   gtkspellmm/gtkspell/src/gtkspell_docs.xml
#   gtkspellmm/gtkspell/src/gtkspell_enum.defs
#   gtkspellmm/gtkspell/src/gtkspell_method.defs
#   gtkspellmm/gtkspell/src/gtkspell_signal.defs

GLIBMM_TOOLS_DIR=tools
GTKSPELL_DIR=../../gtkspell/gtkspell
GTKSPELLMM_GTKSPELL_SRC_DIR=../gtkspell/src

$GLIBMM_TOOLS_DIR/defs_gen/docextract_to_xml.py \
  -s $GTKSPELL_DIR \
  >$GTKSPELLMM_GTKSPELL_SRC_DIR/gtkspell_docs.xml

$GLIBMM_TOOLS_DIR/enum.pl \
  $GTKSPELL_DIR/*.h \
  >$GTKSPELLMM_GTKSPELL_SRC_DIR/gtkspell_enum.defs

$GLIBMM_TOOLS_DIR/defs_gen/h2def.py \
  $GTKSPELL_DIR/*.h \
  >$GTKSPELLMM_GTKSPELL_SRC_DIR/gtkspell_method.defs

extradefs/generate_extra_defs \
  >$GTKSPELLMM_GTKSPELL_SRC_DIR/gtkspell_signal.defs


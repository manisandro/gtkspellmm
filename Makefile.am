## Copyright (c) 2013  Sandro Mani <manisandro@gmail.com>
##
## This file is part of gtkspellmm.
##
## gtkspellmm is free software: you can redistribute it and/or modify it
## under the terms of the GNU Lesser General Public License as published
## by the Free Software Foundation, either version 2.1 of the License,
## or (at your option) any later version.
##
## gtkspellmm is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
## See the GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

ACLOCAL_AMFLAGS = -I build ${ACLOCAL_FLAGS}
DISTCHECK_CONFIGURE_FLAGS = --enable-warnings=fatal

if MAINTAINER_MODE
src_subdirs = codegen gtkspell/src
else
src_subdirs =
endif
if ENABLE_DOCUMENTATION
doc_subdirs = doc
else
doc_subdirs =
endif
SUBDIRS = $(src_subdirs) gtkspell/gtkspellmm examples $(doc_subdirs)

gtkspellmm_includedir = $(includedir)/$(GTKSPELLMM_MODULE_NAME)
gtkspellmm_include_HEADERS = gtkspell/gtkspellmm.h

gtkspellmm_libincludedir = $(libdir)/$(GTKSPELLMM_MODULE_NAME)/include
nodist_gtkspellmm_libinclude_HEADERS = gtkspell/gtkspellmmconfig.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gtkspell/$(GTKSPELLMM_MODULE_NAME).pc

dist_noinst_SCRIPTS = autogen.sh

# Optional: auto-generate the ChangeLog file from the git log on make dist
#include $(top_srcdir)/build/dist-changelog.am

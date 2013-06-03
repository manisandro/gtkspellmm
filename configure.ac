## Copyright (c) 2013  Sandro Mani <manisandro@gmail.com>
##
## This file is part of gtkspellmm.
##
## gtkspellmm is free software: you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by the
## Free Software Foundation, either version 2 of the License, or
## (at your option) any later version.
## 
## gtkspellmm is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
## See the GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License along
## with this program.  If not, see <http://www.gnu.org/licenses/>.

m4_define(gtkspellmm_version_minor, 0)
m4_define(gtkspellmm_version_micro, 3)

AC_INIT([gtkspellmm], [3.gtkspellmm_version_minor.gtkspellmm_version_micro],
        [https://sourceforge.net/p/gtkspell/_list/tickets], [gtkspellmm],
        [http://gtkspell.sourceforge.net/])
AC_PREREQ([2.59])

AC_CONFIG_SRCDIR([gtkspell/gtkspellmm.h])
AC_CONFIG_AUX_DIR([build])
AC_CONFIG_MACRO_DIR([build])
AC_CONFIG_HEADERS([build/config.h gtkspell/gtkspellmmconfig.h])

AM_INIT_AUTOMAKE([1.9 -Wno-portability check-news dist-bzip2 no-define nostdinc tar-pax])
AM_SILENT_RULES([yes])
AM_MAINTAINER_MODE
AC_ARG_VAR([ACLOCAL_FLAGS], [aclocal flags, e.g. -I <macro dir>])

MM_PREREQ([0.9])
MM_INIT_MODULE([gtkspellmm-3.0])

# Copy the mm-common .pl scripts into doc/, and use them from there,
# so we can dist them to avoid a tarball-build dependency.
MM_CONFIG_DOCTOOL_DIR([doc])

# http://www.gnu.org/software/libtool/manual/html_node/Updating-version-info.html
AC_SUBST([GTKSPELLMM_SO_VERSION], [1:0:1])

AC_PROG_CXX
AC_DISABLE_STATIC
AC_LIBTOOL_WIN32_DLL
AC_PROG_LIBTOOL

GTKSPELLMM_VERSION_MINOR=gtkspellmm_version_minor
GTKSPELLMM_VERSION_MICRO=gtkspellmm_version_micro
AC_SUBST(GTKSPELLMM_VERSION_MINOR)
AC_SUBST(GTKSPELLMM_VERSION_MICRO)

AC_SUBST([GTKSPELLMM_MODULES], ['gtk+-3.0 gtkspell3-3.0 glibmm-2.4 >= 2.16 gtkmm-3.0'])
PKG_CHECK_MODULES([GTKSPELLMM], [$GTKSPELLMM_MODULES])

MM_PKG_CONFIG_SUBST([GTHREAD_CFLAGS], [--cflags-only-other gthread-2.0])
MM_PKG_CONFIG_SUBST([GMMPROC_DIR], [--variable=gmmprocdir glibmm-2.4])
MM_PKG_CONFIG_SUBST([GMMPROC_EXTRA_M4_DIR], [--variable=gmmprocm4dir pangomm-1.4 atkmm-1.6 gtkmm-3.0])

MM_ARG_ENABLE_DOCUMENTATION
MM_ARG_WITH_TAGFILE_DOC([libstdc++.tag], [mm-common-libstdc++])
MM_ARG_WITH_TAGFILE_DOC([libsigc++-2.0.tag], [sigc++-2.0])
MM_ARG_WITH_TAGFILE_DOC([glibmm-2.4.tag], [glibmm-2.4])
MM_ARG_WITH_TAGFILE_DOC([gtkmm-3.0.tag], [gtkmm-3.0])

AC_LANG([C++])
MM_ARG_ENABLE_WARNINGS([GTKSPELLMM_WXXFLAGS],
                       [-Wall],
                       [-Wall -Wextra],
                       [G GTKSPELL])

AC_CONFIG_FILES([gtkspellmm30.spec
                 Makefile
                 codegen/Makefile
                 gtkspell/${GTKSPELLMM_MODULE_NAME}.pc:gtkspell/gtkspellmm.pc.in
                 gtkspell/${GTKSPELLMM_MODULE_NAME}-uninstalled.pc:gtkspell/gtkspellmm-uninstalled.pc.in
                 gtkspell/src/Makefile
                 gtkspell/gtkspellmm/Makefile
                 examples/Makefile
                 doc/Makefile
                 doc/reference/Doxyfile])
AC_OUTPUT

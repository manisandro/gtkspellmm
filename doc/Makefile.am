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

include $(top_srcdir)/gtkspell/src/filelist.am
include $(top_srcdir)/gtkspell/gtkspellmm/filelist.am

gtkspellmm_files_h = $(files_built_h) $(filter-out wrap_init.h,$(files_extra_h))

book_name = $(GTKSPELLMM_MODULE_NAME)
doc_input = $(top_srcdir)/gtkspell/gtkspellmm.h	$(addprefix\
            $(top_srcdir)/gtkspell/gtkspellmm/,$(gtkspellmm_files_h))

include $(top_srcdir)/build/doc-reference.am

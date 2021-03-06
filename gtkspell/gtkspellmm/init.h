/* Copyright (c) 2013-2014  Sandro Mani <manisandro@gmail.com>
 *
 * This file is part of gtkspellmm.
 *
 * gtkspellmm is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * gtkspellmm is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTKSPELLMM_INIT_H
#define GTKSPELLMM_INIT_H

namespace GtkSpell
{

/** Initializes the GtkSpell library.
 * This function registers the GtkSpell errors and types, and must be called
 * before using any GtkSpell functions.
 */
void init();

}

#endif /* GTKSPELLMM_INIT_H */

/* Copyright (c) 2013  Sandro Mani <manisandro@gmail.com>
 *
 * This file is part of gtkspellmm.
 *
 * gtkspellmm is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 2.1 of the License,
 * or (at your option) any later version.
 *
 * gtkspellmm is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkspellmm/init.h>
#include <gtkspellmm/wrap_init.h>
#include <glibmm/init.h>

namespace GtkSpell
{

void init()
{
  /* Sets up the g type system and the Glib::wrap() table. */
  Glib::init();

  /* Tells the Glib::wrap() table about the gtkspellmm classes. */
  GtkSpell::wrap_init();
}

}

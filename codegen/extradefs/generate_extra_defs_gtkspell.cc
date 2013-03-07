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

#include <glibmm_generate_extra_defs/generate_extra_defs.h>
#include <gtkspell/gtkspell.h>
#include <iostream>

int main(int argc, char *argv[])
{
  gtk_init(&argc, &argv);

  std::cout << get_defs(GTK_SPELL_TYPE_CHECKER);

  return 0;
}

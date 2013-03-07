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

#include <gtkmm.h>
#include <gtkspellmm.h>
#include <iostream>

int main(int argc, char **argv)
{
  GtkSpell::init();
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv,
                                                 "org.gtkmm.examples.gtkspell");

  Gtk::ApplicationWindow window;

  Gtk::TextView view;
  view.set_wrap_mode(Gtk::WRAP_WORD);

  Gtk::ScrolledWindow scroll;
  scroll.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
  scroll.set_shadow_type(Gtk::SHADOW_IN);
  scroll.add(view);

  Gtk::Label label("Type some text into the text box.\n"
                   "Try misspelling some words.  Then right-click on them.");

  Gtk::Box box(Gtk::ORIENTATION_VERTICAL, 5);
  box.pack_start(label, false, false, 0);
  box.pack_start(scroll, true, true, 0);

  GtkSpell::Checker spell;
  try {
    spell.set_language("en_US");
  } catch(const GtkSpell::Error& e) {
    label.set_text(Glib::ustring("GtkSpell initialization failed.\n") + e.what());
  }
  spell.attach(view);

  window.set_default_size(400, 400);
  window.set_title("Simple GtkSpell Demonstration");
  window.set_border_width(10);
  window.add(box);
  box.show_all();

  return app->run(window);
}

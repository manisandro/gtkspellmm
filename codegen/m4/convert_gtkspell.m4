dnl Copyright (c) 2013  Sandro Mani <manisandro@gmail.com>
dnl This file is part of gtkspellmm.

_CONV_ENUM(GtkSpell,Error)
_CONVERSION(`GtkSpellChecker*',`Glib::RefPtr<Checker>',`Glib::wrap($3)')
_CONVERSION(`Gtk::TextView&',`GtkTextView*',__FR2P)
_CONVERSION(`Gtk::TextIter&',`GtkTextIter*',__FR2P)
_CONVERSION(`GtkWidget*',`Gtk::Menu*',`($2)(Glib::wrap($3))')
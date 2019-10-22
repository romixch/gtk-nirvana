/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2019 roman <roman.schaller@gmail.com>
 * 
 * gtk-nirvana is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * gtk-nirvana is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <config.h>
#include <gtk/gtk.h>
#include <webkit2/webkit2.h>


#include <glib/gi18n.h>



static GtkWidget*
create_window (void)
{
	GtkWidget *window, *box, *scroll, *view, *entry;

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size (GTK_WINDOW (window), 400, 400);
    gtk_window_set_title (GTK_WINDOW (window), "Nirvana GTD");
    g_signal_connect (window, "delete-event", G_CALLBACK (gtk_main_quit), NULL);

    box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 2);
    gtk_container_set_border_width (GTK_CONTAINER (box), 2);
    gtk_container_add (GTK_CONTAINER (window), box);

    scroll = gtk_scrolled_window_new (NULL, NULL);
    g_object_set (scroll, "shadow-type", GTK_SHADOW_IN, NULL);
    gtk_box_pack_start (GTK_BOX (box), scroll, TRUE, TRUE, 0);

    view = webkit_web_view_new ();
    gtk_container_add (GTK_CONTAINER (scroll), view);
    webkit_web_view_load_uri (WEBKIT_WEB_VIEW (view),
                                 "https://focus.nirvanahq.com/");

    gtk_widget_show_all (GTK_WIDGET (box));
    return window;
}

int
main (int argc, char *argv[])
{
 	GtkWidget *window;



#ifdef ENABLE_NLS

	bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
	textdomain (GETTEXT_PACKAGE);
#endif
	
	gtk_init (&argc, &argv);

	window = create_window ();
	gtk_widget_show (window);

	gtk_main ();




	return 0;
}


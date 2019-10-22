## Process this file with automake to produce Makefile.in

## Created by Anjuta



AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(GTK_NIRVANA_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = gtk_nirvana

gtk_nirvana_SOURCES = \
	main.c


gtk_nirvana_LDFLAGS = \
	-Wl,--export-dynamic

gtk_nirvana_LDADD = $(GTK_NIRVANA_LIBS)





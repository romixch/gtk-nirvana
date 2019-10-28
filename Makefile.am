## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src po pixmaps

dist_doc_DATA = \
	README.md \
	COPYING \
	AUTHORS \
	ChangeLog \
	INSTALL \
	NEWS

AUTOMAKE_OPTIONS = foreign

INTLTOOL_FILES = intltool-extract.in \
	intltool-merge.in \
	intltool-update.in

EXTRA_DIST = \
	$(INTLTOOL_FILES)

DISTCLEANFILES = intltool-extract \
	intltool-merge \
	intltool-update \
	po/.intltool-merge-cache

desktopdir = $(datadir)/applications
dist_desktop_DATA = gtk-nirvana.desktop


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(docdir)

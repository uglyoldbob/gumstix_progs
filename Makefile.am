AUTOMAKE_OPTIONS = foreign

confsubdir = $(sysconfdir)/gprogs

bin_PROGRAMS = gprogs
gprogs_LDFLAGS = $(GTK_LIBS)
gprogs_CFLAGS = $(GTK_CFLAGS) \
 -DCONF_DIR=@sysconfdir@/@PACKAGE@
gprogs_SOURCES = gprog.c

dist_confsub_DATA = main.ui

dist_bin_SCRIPTS = run-gprogs.sh

CLEANFILES = *~ $(dist_bin_SCRIPTS)

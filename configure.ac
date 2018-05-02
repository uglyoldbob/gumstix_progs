AC_PREREQ([2.63])
AC_INIT(gprogs, 0.1, thomas.epperson@gmail.com)
AC_CONFIG_SRCDIR([gprog.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects no-dist-gzip dist-xz])

PKG_CONFIG=pkg-config
PKG_CHECK_MODULES([XLIB],x11)
AC_SUBST(XLIB_CFLAGS)
AC_SUBST(XLIB_LIBS)

pkg_modules="gtk+-3.0 >= 3.0.0"
PKG_CHECK_MODULES(GTK, [$pkg_modules])
AC_SUBST(GTK_CFLAGS)
AC_SUBST(GTK_LIBS)

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

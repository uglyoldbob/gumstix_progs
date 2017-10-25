AC_INIT(gprogs, 0.1, thomas.epperson@gmail.com)
AC_CONFIG_SRCDIR([gprog.c])
AC_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE(gprogs, main)

AC_CHECK_LIB([X11], [XOpenDisplay], [],[
         echo "X11 library is required for this program"
         exit -1])

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

PHP_ARG_ENABLE([gslext],
  [whether to enable gslext support],
  [AS_HELP_STRING([--enable-gslext],
    [Enable gslext support])],
  [no])

dnl PHP_ARG_WITH([gsl],
dnl   [for GNU Scientific Library (GSL) support],
dnl   [AS_HELP_STRING([[--with-gsl[=DIR]]],
dnl     [Include GNU Scientific Library (GSL) support])])

if test "$PHP_GSL" != "no"; then
  if test -r $PHP_GSL/include/gsl/gsl_types.h; then
    GSL_DIR=$PHP_GSL
  else
    AC_MSG_CHECKING(for GNU Scientific Library (GSL) in default path)
    for i in /usr/local /usr; do
      if test -r $i/include/gsl/gsl_types.h; then
        GSL_DIR=$i
        AC_MSG_RESULT(found in $i)
        break
      fi
    done
  fi

  if test -z "$GSL_DIR"; then
    AC_MSG_RESULT(not found)
    AC_MSG_ERROR(Please reinstall the GNU Scientific Library (GSL) distribution)
  fi

  PHP_ADD_INCLUDE($GSL_DIR/include)
  PHP_ADD_LIBRARY_WITH_PATH(gsl, $GSL_DIR/$PHP_LIBDIR, GSLEXT_SHARED_LIBADD)
  PHP_SUBST(GSLEXT_SHARED_LIBADD)

  PHP_NEW_EXTENSION(gslext, gslext.c, $ext_shared)
fi

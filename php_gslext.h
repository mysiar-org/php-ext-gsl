/* gslext extension for PHP */

#ifndef PHP_GSLEXT_H
# define PHP_GSLEXT_H

extern zend_module_entry gslext_module_entry;
# define phpext_gslext_ptr &gslext_module_entry

# define PHP_GSLEXT_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_GSLEXT)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_GSLEXT_H */

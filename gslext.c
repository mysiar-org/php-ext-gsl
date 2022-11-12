/**
 * gslext - GNU Scientific Library (GSL) extension for PHP
 */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_gslext.h"
#include "gslext_arginfo.h"

#include "gslext_helpers.c"

#include "inc/_functions.inc"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

PHP_MINIT_FUNCTION(gslext)
{
#if defined(ZTS) && defined(COMPILE_DL_PHP_GSLEXT)
    ZEND_TSRMLS_CACHE_UPDATE();
#endif
        REGISTER_DOUBLE_CONSTANT("GSL_M_E", 2.71828182845904523536028747135, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_LOG2E", 1.44269504088896340735992468100, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_LOG10E", 0.43429448190325182765112891892, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_SQRT2", 1.41421356237309504880168872421, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_SQRT1_2", 0.70710678118654752440084436210, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_SQRT3", 1.73205080756887729352744634151, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_PI", 3.14159265358979323846264338328, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_PI_2", 1.57079632679489661923132169164, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_PI_4", 0.78539816339744830961566084582, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_SQRTPI", 1.77245385090551602729816748334, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_2_SQRTPI", 1.12837916709551257389615890312, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_2_PI", 0.63661977236758134307553505349, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_LN10", 2.30258509299404568401799145468, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_LN2", 0.69314718055994530941723212146, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_LNPI", 1.14472988584940017414342735135, CONST_CS | CONST_PERSISTENT);
        REGISTER_DOUBLE_CONSTANT("GSL_M_EULER", 0.57721566490153286060651209008, CONST_CS | CONST_PERSISTENT);

        return SUCCESS;
}

PHP_MINFO_FUNCTION(gslext)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "gslext support", "enabled");
	php_info_print_table_end();
}

zend_module_entry gslext_module_entry = {
	STANDARD_MODULE_HEADER,
	"gslext",					    /* Extension name */
	ext_functions,					/* zend_function_entry */
    PHP_MINIT(gslext),				/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	NULL,           			    /* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(gslext),			    /* PHP_MINFO - Module info */
	PHP_GSLEXT_VERSION,		        /* Version */
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_GSLEXT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(gslext)
#endif

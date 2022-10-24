/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ad27433f40fc53d7e4a72067b8ae6e826d9f970f */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_log1p, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_expm1 arginfo_GSL_log1p

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_hypot, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_hypot3, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_acosh arginfo_GSL_log1p

#define arginfo_GSL_asinh arginfo_GSL_log1p

#define arginfo_GSL_atanh arginfo_GSL_log1p


ZEND_FUNCTION(GSL_log1p);
ZEND_FUNCTION(GSL_expm1);
ZEND_FUNCTION(GSL_hypot);
ZEND_FUNCTION(GSL_hypot3);
ZEND_FUNCTION(GSL_acosh);
ZEND_FUNCTION(GSL_asinh);
ZEND_FUNCTION(GSL_atanh);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(GSL_log1p, arginfo_GSL_log1p)
	ZEND_FE(GSL_expm1, arginfo_GSL_expm1)
	ZEND_FE(GSL_hypot, arginfo_GSL_hypot)
	ZEND_FE(GSL_hypot3, arginfo_GSL_hypot3)
	ZEND_FE(GSL_acosh, arginfo_GSL_acosh)
	ZEND_FE(GSL_asinh, arginfo_GSL_asinh)
	ZEND_FE(GSL_atanh, arginfo_GSL_atanh)
	ZEND_FE_END
};

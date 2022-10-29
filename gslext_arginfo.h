/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d16ed7cf9d6bf036dbb041e6c94e0193c3dbf27f */

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_ldexp, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_frexp, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_pow_int, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_pow_2 arginfo_GSL_log1p

#define arginfo_GSL_pow_3 arginfo_GSL_log1p

#define arginfo_GSL_pow_4 arginfo_GSL_log1p

#define arginfo_GSL_pow_5 arginfo_GSL_log1p

#define arginfo_GSL_pow_6 arginfo_GSL_log1p

#define arginfo_GSL_pow_7 arginfo_GSL_log1p

#define arginfo_GSL_pow_8 arginfo_GSL_log1p

#define arginfo_GSL_pow_9 arginfo_GSL_log1p

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_is_odd, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_is_even arginfo_GSL_is_odd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_min, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_max arginfo_GSL_min

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_min_int, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(GSL_log1p);
ZEND_FUNCTION(GSL_expm1);
ZEND_FUNCTION(GSL_hypot);
ZEND_FUNCTION(GSL_hypot3);
ZEND_FUNCTION(GSL_acosh);
ZEND_FUNCTION(GSL_asinh);
ZEND_FUNCTION(GSL_atanh);
ZEND_FUNCTION(GSL_ldexp);
ZEND_FUNCTION(GSL_frexp);
ZEND_FUNCTION(GSL_pow_int);
ZEND_FUNCTION(GSL_pow_2);
ZEND_FUNCTION(GSL_pow_3);
ZEND_FUNCTION(GSL_pow_4);
ZEND_FUNCTION(GSL_pow_5);
ZEND_FUNCTION(GSL_pow_6);
ZEND_FUNCTION(GSL_pow_7);
ZEND_FUNCTION(GSL_pow_8);
ZEND_FUNCTION(GSL_pow_9);
ZEND_FUNCTION(GSL_is_odd);
ZEND_FUNCTION(GSL_is_even);
ZEND_FUNCTION(GSL_min);
ZEND_FUNCTION(GSL_max);
ZEND_FUNCTION(GSL_min_int);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(GSL_log1p, arginfo_GSL_log1p)
	ZEND_FE(GSL_expm1, arginfo_GSL_expm1)
	ZEND_FE(GSL_hypot, arginfo_GSL_hypot)
	ZEND_FE(GSL_hypot3, arginfo_GSL_hypot3)
	ZEND_FE(GSL_acosh, arginfo_GSL_acosh)
	ZEND_FE(GSL_asinh, arginfo_GSL_asinh)
	ZEND_FE(GSL_atanh, arginfo_GSL_atanh)
	ZEND_FE(GSL_ldexp, arginfo_GSL_ldexp)
	ZEND_FE(GSL_frexp, arginfo_GSL_frexp)
	ZEND_FE(GSL_pow_int, arginfo_GSL_pow_int)
	ZEND_FE(GSL_pow_2, arginfo_GSL_pow_2)
	ZEND_FE(GSL_pow_3, arginfo_GSL_pow_3)
	ZEND_FE(GSL_pow_4, arginfo_GSL_pow_4)
	ZEND_FE(GSL_pow_5, arginfo_GSL_pow_5)
	ZEND_FE(GSL_pow_6, arginfo_GSL_pow_6)
	ZEND_FE(GSL_pow_7, arginfo_GSL_pow_7)
	ZEND_FE(GSL_pow_8, arginfo_GSL_pow_8)
	ZEND_FE(GSL_pow_9, arginfo_GSL_pow_9)
	ZEND_FE(GSL_is_odd, arginfo_GSL_is_odd)
	ZEND_FE(GSL_is_even, arginfo_GSL_is_even)
	ZEND_FE(GSL_min, arginfo_GSL_min)
	ZEND_FE(GSL_max, arginfo_GSL_max)
	ZEND_FE(GSL_min_int, arginfo_GSL_min_int)
	ZEND_FE_END
};

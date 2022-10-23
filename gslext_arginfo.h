/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5fb10787a9410335b7176bbda0bbd4dee202bab2 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_log1p, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_expm1 arginfo_GSL_log1p


ZEND_FUNCTION(GSL_log1p);
ZEND_FUNCTION(GSL_expm1);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(GSL_log1p, arginfo_GSL_log1p)
	ZEND_FE(GSL_expm1, arginfo_GSL_expm1)
	ZEND_FE_END
};

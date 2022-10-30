#include "gsl/gsl_math.h"

PHP_FUNCTION(GSL_min)
{
    zval *p_a, *p_b;
    double a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_ZVAL(p_a);
    Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_a);
    convert_to_double(p_b);
    a = Z_DVAL_P(p_a);
    b = Z_DVAL_P(p_b);

    rv = GSL_MIN(a, b);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_max)
{
    zval *p_a, *p_b;
    double a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_ZVAL(p_a);
    Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_a);
    convert_to_double(p_b);
    a = Z_DVAL_P(p_a);
    b = Z_DVAL_P(p_b);

    rv = GSL_MAX(a, b);

    RETURN_DOUBLE(rv);
}


PHP_FUNCTION(GSL_min_int)
{
    zval *p_a, *p_b;
    long a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_a);
        Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_long(p_a);
    convert_to_long(p_b);
    a = Z_LVAL_P(p_a);
    b = Z_LVAL_P(p_b);

    rv = GSL_MIN_INT(a, b);

    RETURN_LONG(rv);
}

PHP_FUNCTION(GSL_max_int)
{
    zval *p_a, *p_b;
    long a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_a);
        Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_long(p_a);
    convert_to_long(p_b);
    a = Z_LVAL_P(p_a);
    b = Z_LVAL_P(p_b);

    rv = GSL_MAX_INT(a, b);

    RETURN_LONG(rv);
}

PHP_FUNCTION(GSL_min_float)
{
    zval *p_a, *p_b;
    double a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_a);
        Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_a);
    convert_to_double(p_b);
    a = Z_DVAL_P(p_a);
    b = Z_DVAL_P(p_b);

    rv = GSL_MIN_DBL(a, b);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_max_float)
{
    zval *p_a, *p_b;
    double a, b, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_a);
        Z_PARAM_ZVAL(p_b);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_a);
    convert_to_double(p_b);
    a = Z_DVAL_P(p_a);
    b = Z_DVAL_P(p_b);

    rv = GSL_MAX_DBL(a, b);

    RETURN_DOUBLE(rv);
}

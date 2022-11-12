#include "gsl/gsl_math.h"

PHP_FUNCTION(GSL_pow_int)
{
    zval *p_x, *p_n;
    double x;
    int n;
    double rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_x);
        Z_PARAM_ZVAL(p_n);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    convert_to_long(p_n);
    x = Z_DVAL_P(p_x);
    n = Z_LVAL_P(p_n);
    rv = gsl_pow_int(x, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_2)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_2(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_3)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_3(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_4)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_4(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_5)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_5(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_6)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_6(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_7)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_7(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_8)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_8(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_pow_9)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_pow_9(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_is_odd)
{
    zval *p_n;
    int n;

    int rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_n);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_long(p_n);
    n = Z_LVAL_P(p_n);

    rv = GSL_IS_ODD(n);

    RETURN_BOOL(rv);
}

PHP_FUNCTION(GSL_is_even)
{
    zval *p_n;
    int n;

    int rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_n);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_long(p_n);
    n = Z_LVAL_P(p_n);

    rv = GSL_IS_EVEN(n);

    RETURN_BOOL(rv);
}
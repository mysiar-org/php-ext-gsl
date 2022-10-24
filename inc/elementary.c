#include "gsl/gsl_sys.h"

PHP_FUNCTION(GSL_log1p)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_log1p(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_expm1)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_expm1(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_hypot)
{
    zval *p_x, *p_y;
    double x, y;
    double rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_x);
        Z_PARAM_ZVAL(p_y);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    convert_to_double(p_y);
    x = Z_DVAL_P(p_x);
    y = Z_DVAL_P(p_y);
    rv = gsl_hypot(x, y);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_hypot3)
{
    zval *p_x, *p_y, *p_z;
    double x, y, z;
    double rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
        Z_PARAM_ZVAL(p_x);
        Z_PARAM_ZVAL(p_y);
        Z_PARAM_ZVAL(p_z);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    convert_to_double(p_y);
    convert_to_double(p_z);
    x = Z_DVAL_P(p_x);
    y = Z_DVAL_P(p_y);
    z = Z_DVAL_P(p_z);
    rv = gsl_hypot3(x, y, z);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_acosh)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_acosh(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_asinh)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_asinh(x);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(GSL_atanh)
{
    zval *p_x;
    double x;
    double rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ZVAL(p_x);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    x = Z_DVAL_P(p_x);
    rv = gsl_atanh(x);

    RETURN_DOUBLE(rv);
}


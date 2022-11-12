#include "gsl/gsl_math.h"

PHP_FUNCTION(GSL_fcmp)
{
    zval *p_x, *p_y, *p_epsilon;
    double x, y, epsilon;
    int rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
        Z_PARAM_ZVAL(p_x);
        Z_PARAM_ZVAL(p_y);
        Z_PARAM_ZVAL(p_epsilon);
    ZEND_PARSE_PARAMETERS_END();

    convert_to_double(p_x);
    convert_to_double(p_y);
    convert_to_double(p_epsilon);
    x = Z_DVAL_P(p_x);
    y = Z_DVAL_P(p_y);
    epsilon = Z_DVAL_P(p_epsilon);

    rv = gsl_fcmp(x, y, epsilon);

    RETURN_LONG(rv);
}
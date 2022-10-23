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
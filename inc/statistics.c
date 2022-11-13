// https://www.gnu.org/software/gsl/doc/html/statistics.html
//

#include <gsl/gsl_statistics_double.h>

PHP_FUNCTION(GSL_stats_mean)
{
    zval *p_data, *p_stride;
    long stride, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
        Z_PARAM_ZVAL(p_data);
        Z_PARAM_ZVAL(p_stride);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_mean(data, stride, n);

    RETURN_DOUBLE(rv);
}
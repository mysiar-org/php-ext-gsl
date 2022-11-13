// https://www.gnu.org/software/gsl/doc/html/statistics.html
//

#include <gsl/gsl_statistics_double.h>

PHP_FUNCTION(gsl_stats_mean)
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

PHP_FUNCTION(gsl_stats_variance)
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

    rv = gsl_stats_variance(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_variance_m)
{
    zval *p_data, *p_stride, *p_mean;
    long stride, n;
    double *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
        Z_PARAM_ZVAL(p_data);
        Z_PARAM_ZVAL(p_stride);
        Z_PARAM_ZVAL(p_mean);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_variance_m(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_sd)
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

    rv = gsl_stats_sd(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_tss)
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

    rv = gsl_stats_tss(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_tss_m)
{
    zval *p_data, *p_stride, *p_mean;
    long stride, n;
    double *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_tss_m(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_variance_with_fixed_mean)
{
    zval *p_data, *p_stride, *p_mean;
    long stride, n;
    double *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_variance_with_fixed_mean(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_sd_with_fixed_mean)
{
    zval *p_data, *p_stride, *p_mean;
    long stride, n;
    double *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_sd_with_fixed_mean(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_absdev)
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

    rv = gsl_stats_absdev(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_absdev_m)
{
    zval *p_data, *p_stride, *p_mean;
    long stride, n;
    double *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(3, 3)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_absdev_m(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

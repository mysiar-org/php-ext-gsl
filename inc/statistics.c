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

PHP_FUNCTION(gsl_stats_skew)
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

    rv = gsl_stats_skew(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_skew_m_sd)
{
    zval *p_data, *p_stride, *p_mean, *p_sd;
    long stride, n;
    double *data, mean, sd, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
            Z_PARAM_ZVAL(p_sd);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);
    _convert_to_double(p_sd, &sd);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_skew_m_sd(data, stride, n, mean, sd);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_kurtosis)
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

    rv = gsl_stats_kurtosis(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_kurtosis_m_sd)
{
    zval *p_data, *p_stride, *p_mean, *p_sd;
    long stride, n;
    double *data, mean, sd, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_data);
            Z_PARAM_ZVAL(p_stride);
            Z_PARAM_ZVAL(p_mean);
            Z_PARAM_ZVAL(p_sd);
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);
    _convert_to_double(p_sd, &sd);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_kurtosis_m_sd(data, stride, n, mean, sd);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_lag1_autocorrelation)
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

    rv = gsl_stats_lag1_autocorrelation(data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_lag1_autocorrelation_m)
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

    rv = gsl_stats_lag1_autocorrelation_m(data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_covariance)
{
    zval *p_data1, *p_data2, *p_stride1, *p_stride2;
    long stride1, stride2, n;
    double *data1, *data2, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_data1)
            Z_PARAM_ZVAL(p_stride1)
            Z_PARAM_ZVAL(p_data2)
            Z_PARAM_ZVAL(p_stride2)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride1, &stride1);
    _convert_to_long(p_stride2, &stride2);

    n = (long) zend_array_count(Z_ARR_P(p_data1));

    _alloc_double(&data1, n);
    _alloc_double(&data2, n);
    _convert_to_double_array(p_data1, data1, n);
    _convert_to_double_array(p_data2, data2, n);

    rv = gsl_stats_covariance(data1, stride1, data2, stride2, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_covariance_m)
{
    zval *p_data1, *p_data2, *p_stride1, *p_stride2, *p_mean1, *p_mean2;
    long stride1, stride2, n;
    double *data1, *data2, mean1, mean2, rv;

    ZEND_PARSE_PARAMETERS_START(6, 6)
            Z_PARAM_ZVAL(p_data1)
            Z_PARAM_ZVAL(p_stride1)
            Z_PARAM_ZVAL(p_data2)
            Z_PARAM_ZVAL(p_stride2)
            Z_PARAM_ZVAL(p_mean1)
            Z_PARAM_ZVAL(p_mean2)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride1, &stride1);
    _convert_to_long(p_stride2, &stride2);
    _convert_to_double(p_mean1, &mean1);
    _convert_to_double(p_mean2, &mean2);

    n = (long) zend_array_count(Z_ARR_P(p_data1));

    _alloc_double(&data1, n);
    _alloc_double(&data2, n);
    _convert_to_double_array(p_data1, data1, n);
    _convert_to_double_array(p_data2, data2, n);

    rv = gsl_stats_covariance_m(data1, stride1, data2, stride2, n, mean1, mean2);

    RETURN_DOUBLE(rv);
}

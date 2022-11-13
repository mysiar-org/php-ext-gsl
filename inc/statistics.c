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

PHP_FUNCTION(gsl_stats_correlation)
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

    rv = gsl_stats_correlation(data1, stride1, data2, stride2, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_spearman)
{
    zval *p_data1, *p_data2, *p_stride1, *p_stride2, *p_work;
    long stride1, stride2, n;
    double *data1, *data2, *work, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_data1)
            Z_PARAM_ZVAL(p_stride1)
            Z_PARAM_ZVAL(p_data2)
            Z_PARAM_ZVAL(p_stride2)
            Z_PARAM_ZVAL(p_work)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_stride1, &stride1);
    _convert_to_long(p_stride2, &stride2);

    n = (long) zend_array_count(Z_ARR_P(p_data1));

    _alloc_double(&data1, n);
    _alloc_double(&data2, n);
    _alloc_double(&work, n * 2);
    _convert_to_double_array(p_data1, data1, n);
    _convert_to_double_array(p_data2, data2, n);
    _convert_to_double_array(p_work, work, n * 2);

    rv = gsl_stats_spearman(data1, stride1, data2, stride2, n, work);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wmean)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wmean(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wvariance)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wvariance(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wvariance_m)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_wmean;
    long wstride, stride, n;
    double *w, *data, wmean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_wmean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_wmean, &wmean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wvariance_m(w, wstride, data, stride, n, wmean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wsd)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wsd(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wsd_m)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_wmean;
    long wstride, stride, n;
    double *w, *data, wmean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_wmean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_wmean, &wmean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wsd_m(w, wstride, data, stride, n, wmean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wvariance_with_fixed_mean)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_mean;
    long wstride, stride, n;
    double *w, *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_mean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wvariance_with_fixed_mean(w, wstride, data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wsd_with_fixed_mean)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_mean;
    long wstride, stride, n;
    double *w, *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_mean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wsd_with_fixed_mean(w, wstride, data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wtss)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wtss(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wtss_m)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_mean;
    long wstride, stride, n;
    double *w, *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_mean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wtss_m(w, wstride, data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wabsdev)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wabsdev(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wabsdev_m)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_mean;
    long wstride, stride, n;
    double *w, *data, mean, rv;

    ZEND_PARSE_PARAMETERS_START(5, 5)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_mean)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_mean, &mean);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wabsdev_m(w, wstride, data, stride, n, mean);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wskew)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wskew(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wskew_m_sd)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_wmean, *p_wsd;
    long wstride, stride, n;
    double *w, *data, wmean, wsd, rv;

    ZEND_PARSE_PARAMETERS_START(6, 6)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_wmean)
            Z_PARAM_ZVAL(p_wsd)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_wmean, &wmean);
    _convert_to_double(p_wsd, &wsd);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wskew_m_sd(w, wstride, data, stride, n, wmean, wsd);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wkurtosis)
{
    zval *p_w, *p_wstride, *p_data, *p_stride;
    long wstride, stride, n;
    double *w, *data, rv;

    ZEND_PARSE_PARAMETERS_START(4, 4)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wkurtosis(w, wstride, data, stride, n);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_stats_wkurtosis_m_sd)
{
    zval *p_w, *p_wstride, *p_data, *p_stride, *p_wmean, *p_wsd;
    long wstride, stride, n;
    double *w, *data, wmean, wsd, rv;

    ZEND_PARSE_PARAMETERS_START(6, 6)
            Z_PARAM_ZVAL(p_w)
            Z_PARAM_ZVAL(p_wstride)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_stride)
            Z_PARAM_ZVAL(p_wmean)
            Z_PARAM_ZVAL(p_wsd)
    ZEND_PARSE_PARAMETERS_END();

    _convert_to_long(p_wstride, &wstride);
    _convert_to_long(p_stride, &stride);
    _convert_to_double(p_wmean, &wmean);
    _convert_to_double(p_wsd, &wsd);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    _alloc_double(&data, n);
    _alloc_double(&w, n);
    _convert_to_double_array(p_w, w, n);
    _convert_to_double_array(p_data, data, n);

    rv = gsl_stats_wkurtosis_m_sd(w, wstride, data, stride, n, wmean, wsd);

    RETURN_DOUBLE(rv);
}

// https://www.gnu.org/software/gsl/doc/html/rstat.html

#include <gsl/gsl_rstat.h>
#include <gsl/gsl_statistics_double.h>

PHP_FUNCTION(gsl_rstat_min)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_min(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_max)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_max(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_mean)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_mean(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_variance)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_variance(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_sd)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_sd(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_sd_mean)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_sd_mean(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_rms)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_rms(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_skew)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_skew(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_kurtosis)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_kurtosis(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_median)
{
    zval *p_data;
    long i, n;
    double *data, rv;

    ZEND_PARSE_PARAMETERS_START(1, 1)
            Z_PARAM_ZVAL(p_data)
    ZEND_PARSE_PARAMETERS_END();

    gsl_rstat_workspace *rstat_p = gsl_rstat_alloc();

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_add(data[i], rstat_p);

    rv = gsl_rstat_median(rstat_p);

    gsl_rstat_reset(rstat_p);
    gsl_rstat_free(rstat_p);

    RETURN_DOUBLE(rv);
}

PHP_FUNCTION(gsl_rstat_quantile_get)
{
    zval *p_data, *p_factor;
    long i, n;
    double *data, factor, rv;

    ZEND_PARSE_PARAMETERS_START(2, 2)
            Z_PARAM_ZVAL(p_data)
            Z_PARAM_ZVAL(p_factor)
    ZEND_PARSE_PARAMETERS_END();

    n = (long) zend_array_count(Z_ARR_P(p_data));
    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    __zval_to_double(p_factor, &factor);

    gsl_rstat_quantile_workspace *work = gsl_rstat_quantile_alloc(factor);

    n = (long) zend_array_count(Z_ARR_P(p_data));

    __alloc_double_array(&data, n);
    __zval_to_double_array(p_data, data, n);

    for (i = 0; i < n; ++i)
        gsl_rstat_quantile_add(data[i], work);

    rv = gsl_rstat_quantile_get(work);

    gsl_rstat_quantile_reset(work);
    gsl_rstat_quantile_free(work);

    RETURN_DOUBLE(rv);
}

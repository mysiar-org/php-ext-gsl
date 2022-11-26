/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 30e64c54e8548bcb86f4957ae56c7255a38f13a9 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_log1p, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_expm1 arginfo_GSL_log1p

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_hypot, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_hypot3, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_acosh arginfo_GSL_log1p

#define arginfo_GSL_asinh arginfo_GSL_log1p

#define arginfo_GSL_atanh arginfo_GSL_log1p

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_ldexp, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_frexp, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_pow_int, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_pow_2 arginfo_GSL_log1p

#define arginfo_GSL_pow_3 arginfo_GSL_log1p

#define arginfo_GSL_pow_4 arginfo_GSL_log1p

#define arginfo_GSL_pow_5 arginfo_GSL_log1p

#define arginfo_GSL_pow_6 arginfo_GSL_log1p

#define arginfo_GSL_pow_7 arginfo_GSL_log1p

#define arginfo_GSL_pow_8 arginfo_GSL_log1p

#define arginfo_GSL_pow_9 arginfo_GSL_log1p

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_is_odd, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_is_even arginfo_GSL_is_odd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_min, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_max arginfo_GSL_min

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_min_int, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_max_int arginfo_GSL_min_int

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_min_float, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_GSL_max_float arginfo_GSL_min_float

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GSL_fcmp, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, epsilon, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_mean, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_variance arginfo_gsl_stats_mean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_variance_m, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mean, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_sd arginfo_gsl_stats_mean

#define arginfo_gsl_stats_tss arginfo_gsl_stats_mean

#define arginfo_gsl_stats_tss_m arginfo_gsl_stats_variance_m

#define arginfo_gsl_stats_variance_with_fixed_mean arginfo_gsl_stats_variance_m

#define arginfo_gsl_stats_sd_with_fixed_mean arginfo_gsl_stats_variance_m

#define arginfo_gsl_stats_absdev arginfo_gsl_stats_mean

#define arginfo_gsl_stats_absdev_m arginfo_gsl_stats_variance_m

#define arginfo_gsl_stats_skew arginfo_gsl_stats_mean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_skew_m_sd, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mean, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sd, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_kurtosis arginfo_gsl_stats_mean

#define arginfo_gsl_stats_kurtosis_m_sd arginfo_gsl_stats_skew_m_sd

#define arginfo_gsl_stats_lag1_autocorrelation arginfo_gsl_stats_mean

#define arginfo_gsl_stats_lag1_autocorrelation_m arginfo_gsl_stats_variance_m

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_covariance, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_covariance_m, 0, 6, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mean1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mean2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_correlation arginfo_gsl_stats_covariance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_spearman, 0, 5, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, work, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_wmean, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, wstride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_wvariance arginfo_gsl_stats_wmean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_wvariance_m, 0, 5, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, wstride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wmean, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_wsd arginfo_gsl_stats_wmean

#define arginfo_gsl_stats_wsd_m arginfo_gsl_stats_wvariance_m

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_wvariance_with_fixed_mean, 0, 5, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, wstride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mean, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_wsd_with_fixed_mean arginfo_gsl_stats_wvariance_with_fixed_mean

#define arginfo_gsl_stats_wtss arginfo_gsl_stats_wmean

#define arginfo_gsl_stats_wtss_m arginfo_gsl_stats_wvariance_with_fixed_mean

#define arginfo_gsl_stats_wabsdev arginfo_gsl_stats_wmean

#define arginfo_gsl_stats_wabsdev_m arginfo_gsl_stats_wvariance_with_fixed_mean

#define arginfo_gsl_stats_wskew arginfo_gsl_stats_wmean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_wskew_m_sd, 0, 6, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, wstride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wmean, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_wkurtosis arginfo_gsl_stats_wmean

#define arginfo_gsl_stats_wkurtosis_m_sd arginfo_gsl_stats_wskew_m_sd

#define arginfo_gsl_stats_max arginfo_gsl_stats_mean

#define arginfo_gsl_stats_min arginfo_gsl_stats_mean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_minmax, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, max, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_min_index, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_max_index arginfo_gsl_stats_min_index

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_minmax_index, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(1, min_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, max_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_median_from_sorted_data, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sorted_data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_median arginfo_gsl_stats_mean

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_quantile_from_sorted_data, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sorted_data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_select, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gsl_stats_trmean_from_sorted_data, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sorted_data, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gsl_stats_gastwirth_from_sorted_data arginfo_gsl_stats_median_from_sorted_data

#define arginfo_gsl_stats_mad0 arginfo_gsl_stats_mean

#define arginfo_gsl_stats_mad arginfo_gsl_stats_mean

#define arginfo_gsl_stats_Sn0_from_sorted_data arginfo_gsl_stats_median_from_sorted_data

#define arginfo_gsl_stats_Sn_from_sorted_data arginfo_gsl_stats_median_from_sorted_data


ZEND_FUNCTION(GSL_log1p);
ZEND_FUNCTION(GSL_expm1);
ZEND_FUNCTION(GSL_hypot);
ZEND_FUNCTION(GSL_hypot3);
ZEND_FUNCTION(GSL_acosh);
ZEND_FUNCTION(GSL_asinh);
ZEND_FUNCTION(GSL_atanh);
ZEND_FUNCTION(GSL_ldexp);
ZEND_FUNCTION(GSL_frexp);
ZEND_FUNCTION(GSL_pow_int);
ZEND_FUNCTION(GSL_pow_2);
ZEND_FUNCTION(GSL_pow_3);
ZEND_FUNCTION(GSL_pow_4);
ZEND_FUNCTION(GSL_pow_5);
ZEND_FUNCTION(GSL_pow_6);
ZEND_FUNCTION(GSL_pow_7);
ZEND_FUNCTION(GSL_pow_8);
ZEND_FUNCTION(GSL_pow_9);
ZEND_FUNCTION(GSL_is_odd);
ZEND_FUNCTION(GSL_is_even);
ZEND_FUNCTION(GSL_min);
ZEND_FUNCTION(GSL_max);
ZEND_FUNCTION(GSL_min_int);
ZEND_FUNCTION(GSL_max_int);
ZEND_FUNCTION(GSL_min_float);
ZEND_FUNCTION(GSL_max_float);
ZEND_FUNCTION(GSL_fcmp);
ZEND_FUNCTION(gsl_stats_mean);
ZEND_FUNCTION(gsl_stats_variance);
ZEND_FUNCTION(gsl_stats_variance_m);
ZEND_FUNCTION(gsl_stats_sd);
ZEND_FUNCTION(gsl_stats_tss);
ZEND_FUNCTION(gsl_stats_tss_m);
ZEND_FUNCTION(gsl_stats_variance_with_fixed_mean);
ZEND_FUNCTION(gsl_stats_sd_with_fixed_mean);
ZEND_FUNCTION(gsl_stats_absdev);
ZEND_FUNCTION(gsl_stats_absdev_m);
ZEND_FUNCTION(gsl_stats_skew);
ZEND_FUNCTION(gsl_stats_skew_m_sd);
ZEND_FUNCTION(gsl_stats_kurtosis);
ZEND_FUNCTION(gsl_stats_kurtosis_m_sd);
ZEND_FUNCTION(gsl_stats_lag1_autocorrelation);
ZEND_FUNCTION(gsl_stats_lag1_autocorrelation_m);
ZEND_FUNCTION(gsl_stats_covariance);
ZEND_FUNCTION(gsl_stats_covariance_m);
ZEND_FUNCTION(gsl_stats_correlation);
ZEND_FUNCTION(gsl_stats_spearman);
ZEND_FUNCTION(gsl_stats_wmean);
ZEND_FUNCTION(gsl_stats_wvariance);
ZEND_FUNCTION(gsl_stats_wvariance_m);
ZEND_FUNCTION(gsl_stats_wsd);
ZEND_FUNCTION(gsl_stats_wsd_m);
ZEND_FUNCTION(gsl_stats_wvariance_with_fixed_mean);
ZEND_FUNCTION(gsl_stats_wsd_with_fixed_mean);
ZEND_FUNCTION(gsl_stats_wtss);
ZEND_FUNCTION(gsl_stats_wtss_m);
ZEND_FUNCTION(gsl_stats_wabsdev);
ZEND_FUNCTION(gsl_stats_wabsdev_m);
ZEND_FUNCTION(gsl_stats_wskew);
ZEND_FUNCTION(gsl_stats_wskew_m_sd);
ZEND_FUNCTION(gsl_stats_wkurtosis);
ZEND_FUNCTION(gsl_stats_wkurtosis_m_sd);
ZEND_FUNCTION(gsl_stats_max);
ZEND_FUNCTION(gsl_stats_min);
ZEND_FUNCTION(gsl_stats_minmax);
ZEND_FUNCTION(gsl_stats_min_index);
ZEND_FUNCTION(gsl_stats_max_index);
ZEND_FUNCTION(gsl_stats_minmax_index);
ZEND_FUNCTION(gsl_stats_median_from_sorted_data);
ZEND_FUNCTION(gsl_stats_median);
ZEND_FUNCTION(gsl_stats_quantile_from_sorted_data);
ZEND_FUNCTION(gsl_stats_select);
ZEND_FUNCTION(gsl_stats_trmean_from_sorted_data);
ZEND_FUNCTION(gsl_stats_gastwirth_from_sorted_data);
ZEND_FUNCTION(gsl_stats_mad0);
ZEND_FUNCTION(gsl_stats_mad);
ZEND_FUNCTION(gsl_stats_Sn0_from_sorted_data);
ZEND_FUNCTION(gsl_stats_Sn_from_sorted_data);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(GSL_log1p, arginfo_GSL_log1p)
	ZEND_FE(GSL_expm1, arginfo_GSL_expm1)
	ZEND_FE(GSL_hypot, arginfo_GSL_hypot)
	ZEND_FE(GSL_hypot3, arginfo_GSL_hypot3)
	ZEND_FE(GSL_acosh, arginfo_GSL_acosh)
	ZEND_FE(GSL_asinh, arginfo_GSL_asinh)
	ZEND_FE(GSL_atanh, arginfo_GSL_atanh)
	ZEND_FE(GSL_ldexp, arginfo_GSL_ldexp)
	ZEND_FE(GSL_frexp, arginfo_GSL_frexp)
	ZEND_FE(GSL_pow_int, arginfo_GSL_pow_int)
	ZEND_FE(GSL_pow_2, arginfo_GSL_pow_2)
	ZEND_FE(GSL_pow_3, arginfo_GSL_pow_3)
	ZEND_FE(GSL_pow_4, arginfo_GSL_pow_4)
	ZEND_FE(GSL_pow_5, arginfo_GSL_pow_5)
	ZEND_FE(GSL_pow_6, arginfo_GSL_pow_6)
	ZEND_FE(GSL_pow_7, arginfo_GSL_pow_7)
	ZEND_FE(GSL_pow_8, arginfo_GSL_pow_8)
	ZEND_FE(GSL_pow_9, arginfo_GSL_pow_9)
	ZEND_FE(GSL_is_odd, arginfo_GSL_is_odd)
	ZEND_FE(GSL_is_even, arginfo_GSL_is_even)
	ZEND_FE(GSL_min, arginfo_GSL_min)
	ZEND_FE(GSL_max, arginfo_GSL_max)
	ZEND_FE(GSL_min_int, arginfo_GSL_min_int)
	ZEND_FE(GSL_max_int, arginfo_GSL_max_int)
	ZEND_FE(GSL_min_float, arginfo_GSL_min_float)
	ZEND_FE(GSL_max_float, arginfo_GSL_max_float)
	ZEND_FE(GSL_fcmp, arginfo_GSL_fcmp)
	ZEND_FE(gsl_stats_mean, arginfo_gsl_stats_mean)
	ZEND_FE(gsl_stats_variance, arginfo_gsl_stats_variance)
	ZEND_FE(gsl_stats_variance_m, arginfo_gsl_stats_variance_m)
	ZEND_FE(gsl_stats_sd, arginfo_gsl_stats_sd)
	ZEND_FE(gsl_stats_tss, arginfo_gsl_stats_tss)
	ZEND_FE(gsl_stats_tss_m, arginfo_gsl_stats_tss_m)
	ZEND_FE(gsl_stats_variance_with_fixed_mean, arginfo_gsl_stats_variance_with_fixed_mean)
	ZEND_FE(gsl_stats_sd_with_fixed_mean, arginfo_gsl_stats_sd_with_fixed_mean)
	ZEND_FE(gsl_stats_absdev, arginfo_gsl_stats_absdev)
	ZEND_FE(gsl_stats_absdev_m, arginfo_gsl_stats_absdev_m)
	ZEND_FE(gsl_stats_skew, arginfo_gsl_stats_skew)
	ZEND_FE(gsl_stats_skew_m_sd, arginfo_gsl_stats_skew_m_sd)
	ZEND_FE(gsl_stats_kurtosis, arginfo_gsl_stats_kurtosis)
	ZEND_FE(gsl_stats_kurtosis_m_sd, arginfo_gsl_stats_kurtosis_m_sd)
	ZEND_FE(gsl_stats_lag1_autocorrelation, arginfo_gsl_stats_lag1_autocorrelation)
	ZEND_FE(gsl_stats_lag1_autocorrelation_m, arginfo_gsl_stats_lag1_autocorrelation_m)
	ZEND_FE(gsl_stats_covariance, arginfo_gsl_stats_covariance)
	ZEND_FE(gsl_stats_covariance_m, arginfo_gsl_stats_covariance_m)
	ZEND_FE(gsl_stats_correlation, arginfo_gsl_stats_correlation)
	ZEND_FE(gsl_stats_spearman, arginfo_gsl_stats_spearman)
	ZEND_FE(gsl_stats_wmean, arginfo_gsl_stats_wmean)
	ZEND_FE(gsl_stats_wvariance, arginfo_gsl_stats_wvariance)
	ZEND_FE(gsl_stats_wvariance_m, arginfo_gsl_stats_wvariance_m)
	ZEND_FE(gsl_stats_wsd, arginfo_gsl_stats_wsd)
	ZEND_FE(gsl_stats_wsd_m, arginfo_gsl_stats_wsd_m)
	ZEND_FE(gsl_stats_wvariance_with_fixed_mean, arginfo_gsl_stats_wvariance_with_fixed_mean)
	ZEND_FE(gsl_stats_wsd_with_fixed_mean, arginfo_gsl_stats_wsd_with_fixed_mean)
	ZEND_FE(gsl_stats_wtss, arginfo_gsl_stats_wtss)
	ZEND_FE(gsl_stats_wtss_m, arginfo_gsl_stats_wtss_m)
	ZEND_FE(gsl_stats_wabsdev, arginfo_gsl_stats_wabsdev)
	ZEND_FE(gsl_stats_wabsdev_m, arginfo_gsl_stats_wabsdev_m)
	ZEND_FE(gsl_stats_wskew, arginfo_gsl_stats_wskew)
	ZEND_FE(gsl_stats_wskew_m_sd, arginfo_gsl_stats_wskew_m_sd)
	ZEND_FE(gsl_stats_wkurtosis, arginfo_gsl_stats_wkurtosis)
	ZEND_FE(gsl_stats_wkurtosis_m_sd, arginfo_gsl_stats_wkurtosis_m_sd)
	ZEND_FE(gsl_stats_max, arginfo_gsl_stats_max)
	ZEND_FE(gsl_stats_min, arginfo_gsl_stats_min)
	ZEND_FE(gsl_stats_minmax, arginfo_gsl_stats_minmax)
	ZEND_FE(gsl_stats_min_index, arginfo_gsl_stats_min_index)
	ZEND_FE(gsl_stats_max_index, arginfo_gsl_stats_max_index)
	ZEND_FE(gsl_stats_minmax_index, arginfo_gsl_stats_minmax_index)
	ZEND_FE(gsl_stats_median_from_sorted_data, arginfo_gsl_stats_median_from_sorted_data)
	ZEND_FE(gsl_stats_median, arginfo_gsl_stats_median)
	ZEND_FE(gsl_stats_quantile_from_sorted_data, arginfo_gsl_stats_quantile_from_sorted_data)
	ZEND_FE(gsl_stats_select, arginfo_gsl_stats_select)
	ZEND_FE(gsl_stats_trmean_from_sorted_data, arginfo_gsl_stats_trmean_from_sorted_data)
	ZEND_FE(gsl_stats_gastwirth_from_sorted_data, arginfo_gsl_stats_gastwirth_from_sorted_data)
	ZEND_FE(gsl_stats_mad0, arginfo_gsl_stats_mad0)
	ZEND_FE(gsl_stats_mad, arginfo_gsl_stats_mad)
	ZEND_FE(gsl_stats_Sn0_from_sorted_data, arginfo_gsl_stats_Sn0_from_sorted_data)
	ZEND_FE(gsl_stats_Sn_from_sorted_data, arginfo_gsl_stats_Sn_from_sorted_data)
	ZEND_FE_END
};

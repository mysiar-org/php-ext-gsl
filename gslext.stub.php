<?php

/** @generate-class-entries */

// Elementary
function GSL_log1p(float $x): float {}
function GSL_expm1(float $x): float {}
function GSL_hypot(float $x, float $y): float {}
function GSL_hypot3(float $x, float $y, float $z): float {}
function GSL_acosh(float $x): float {}
function GSL_asinh(float $x): float {}
function GSL_atanh(float $x): float {}
function GSL_ldexp(float $x, int $e): float {}
function GSL_frexp(float $x, int &$e): float {}

// Small integer powers
function GSL_pow_int(float $x, int $n): float {}
function GSL_pow_2(float $x): float {}
function GSL_pow_3(float $x): float {}
function GSL_pow_4(float $x): float {}
function GSL_pow_5(float $x): float {}
function GSL_pow_6(float $x): float {}
function GSL_pow_7(float $x): float {}
function GSL_pow_8(float $x): float {}
function GSL_pow_9(float $x): float {}
function GSL_is_odd(int $n): bool {}
function GSL_is_even(int $n): bool {}

// Min max
function GSL_min(mixed $a, mixed $b): float {}
function GSL_max(mixed $a, mixed $b): float {}

function GSL_min_int(int $a, int $b): int {}
function GSL_max_int(int $a, int $b): int {}

function GSL_min_float(float $a, float $b): float {}
function GSL_max_float(float $a, float $b): float {}

// fcmp
function GSL_fcmp(float $x, float $y, float $epsilon): int {}

// Statistics
function gsl_stats_mean(array $data, int $stride): float {}
function gsl_stats_variance(array $data, int $stride): float {}
function gsl_stats_variance_m(array $data, int $stride, float $mean): float {}
function gsl_stats_sd(array $data, int $stride): float {}
function gsl_stats_tss(array $data, int $stride): float {}
function gsl_stats_tss_m(array $data, int $stride, float $mean): float {}
function gsl_stats_variance_with_fixed_mean(array $data, int $stride, float $mean): float {}
function gsl_stats_sd_with_fixed_mean(array $data, int $stride, float $mean): float {}
function gsl_stats_absdev(array $data, int $stride): float {}
function gsl_stats_absdev_m(array $data, int $stride, float $mean): float {}
function gsl_stats_skew(array $data, int $stride): float {}
function gsl_stats_skew_m_sd(array $data, int $stride, float $mean, float $sd): float {}
function gsl_stats_kurtosis(array $data, int $stride): float {}
function gsl_stats_kurtosis_m_sd(array $data, int $stride, float $mean, float $sd): float {}
function gsl_stats_lag1_autocorrelation(array $data, int $stride): float {}
function gsl_stats_lag1_autocorrelation_m(array $data, int $stride, float $mean): float {}
function gsl_stats_covariance(array $data1, int $stride1, array $data2, int $stride2): float {}
function gsl_stats_covariance_m(array $data1, int $stride1, array $data2, int $stride2, float $mean1, float $mean2): float {}
function gsl_stats_correlation(array $data1, int $stride1, array $data2, int $stride2): float {}
function gsl_stats_spearman(array $data1, int $stride1, array $data2, int $stride2, array $work): float {}
function gsl_stats_wmean(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wvariance(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wvariance_m(array $w, int $wstride, array $data, int $stride, float $wmean): float {}
function gsl_stats_wsd(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wsd_m(array $w, int $wstride, array $data, int $stride, float $wmean): float {}
function gsl_stats_wvariance_with_fixed_mean(array $w, int $wstride, array $data, int $stride, float $mean): float {}
function gsl_stats_wsd_with_fixed_mean(array $w, int $wstride, array $data, int $stride, float $mean): float {}
function gsl_stats_wtss(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wtss_m(array $w, int $wstride, array $data, int $stride, float $mean): float {}
function gsl_stats_wabsdev(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wabsdev_m(array $w, int $wstride, array $data, int $stride, float $mean): float {}
function gsl_stats_wskew(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wskew_m_sd(array $w, int $wstride, array $data, int $stride, float $wmean, float $wds): float {}
function gsl_stats_wkurtosis(array $w, int $wstride, array $data, int $stride): float {}
function gsl_stats_wkurtosis_m_sd(array $w, int $wstride, array $data, int $stride, float $wmean, float $wds): float {}
function gsl_stats_max(array $data, int $stride): float {}
function gsl_stats_min(array $data, int $stride): float {}
function gsl_stats_minmax(float &$min, float &$max, array $data, int $stride): void {}
function gsl_stats_min_index(array $data, int $stride): int {}
function gsl_stats_max_index(array $data, int $stride): int {}
function gsl_stats_minmax_index(int &$min_index, int &$max_index, array $data, int $stride): void {}
function gsl_stats_median_from_sorted_data(array $sorted_data, int $stride): float {}
function gsl_stats_median(array $data, int $stride): float {}
function gsl_stats_quantile_from_sorted_data(array $sorted_data, int $stride, float $f): float {}
function gsl_stats_select(array $data, int $stride, int $k): float {}
function gsl_stats_trmean_from_sorted_data(float $alpha, array $sorted_data, int $stride): float {}
function gsl_stats_gastwirth_from_sorted_data(array $sorted_data, int $stride): float {}
function gsl_stats_mad0(array $data, int $stride): float {}
function gsl_stats_mad(array $data, int $stride): float {}
function gsl_stats_Sn0_from_sorted_data(array $sorted_data, int $stride): float {}
function gsl_stats_Sn_from_sorted_data(array $sorted_data, int $stride): float {}
--TEST--
statistics
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump("gsl_stats_mean");
$data = [1, 1, 1, 1, 1];
$stride = 1;
var_dump(gsl_stats_mean($data, $stride));
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_mean($data, $stride));

var_dump("gsl_stats_variance");
$data = [1, 1, 1, 1, 1];
$stride = 1;
var_dump(gsl_stats_variance($data, $stride));
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_variance($data, $stride));

var_dump("gsl_stats_variance_m");
$data = [1, 2, 1, 2, 1];
$stride = 1;
$mean = gsl_stats_mean($data, $stride);
var_dump(gsl_stats_variance_m($data, $stride, $mean));

var_dump("gsl_stats_sd");
$data = [1, 2, 1, 2, 1];
$stride = 1;
var_dump(gsl_stats_sd($data, $stride));

var_dump("gsl_stats_tss");
$data = [1, 2, 1, 2, 1];
$stride = 1;
var_dump(gsl_stats_tss($data, $stride));

var_dump("gsl_stats_tss_m");
$data = [1, 2, 1, 2, 1];
$stride = 1;
$mean = gsl_stats_mean($data, $stride);
var_dump(gsl_stats_tss_m($data, $stride, $mean));

var_dump("gsl_stats_variance_with_fixed_mean");
$data = [1, 2, 1, 2, 1];
$stride = 1;
$mean = gsl_stats_mean($data, $stride);
var_dump(gsl_stats_variance_with_fixed_mean($data, $stride, $mean));

var_dump("gsl_stats_sd_with_fixed_mean");
$data = [1, 2, 1, 2, 1];
$stride = 1;
$mean = gsl_stats_mean($data, $stride);
var_dump(gsl_stats_sd_with_fixed_mean($data, $stride, $mean));

var_dump("gsl_stats_absdev");
$data = [1, 2, 1, 2, 1];
$stride = 1;
var_dump(gsl_stats_absdev($data, $stride));

var_dump("gsl_stats_absdev_m");
$data = [1, 2, 1, 2, 1];
$stride = 1;
$mean = 0.3;
var_dump(gsl_stats_absdev_m($data, $stride, $mean));

var_dump("gsl_stats_skew");
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_skew($data, 1));

var_dump("gsl_stats_skew_m_sd");
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_skew_m_sd($data, 1, 0.3, 0.33));

var_dump("gsl_stats_kurtosis");
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_kurtosis($data, 1));

var_dump("gsl_stats_kurtosis_m_sd");
$data = [1, 2, 1, 2, 1];
var_dump(gsl_stats_kurtosis_m_sd($data, 1, 0.3, 0.33));

var_dump("gsl_stats_lag1_autocorrelation");
$data = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
var_dump(gsl_stats_lag1_autocorrelation($data, 1));

var_dump("gsl_stats_lag1_autocorrelation_m");
$data = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
var_dump(gsl_stats_lag1_autocorrelation_m($data, 1, 0.3));

var_dump("gsl_stats_covariance");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2];
var_dump(gsl_stats_covariance($data1, 1, $data2, 1));

var_dump("gsl_stats_covariance_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2];
var_dump(gsl_stats_covariance_m($data1, 1, $data2, 1, 0.12, 0.25));

var_dump("gsl_stats_correlation");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_correlation($data1, 1, $data2, 1));

var_dump("gsl_stats_spearman");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
$work = [];
var_dump(gsl_stats_spearman($data1, 1, $data2, 1, $work));

var_dump("gsl_stats_wmean");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wmean($data1, 1, $data2, 1));

var_dump("gsl_stats_wvariance");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wvariance($data1, 1, $data2, 1));

var_dump("gsl_stats_wvariance_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wvariance_m($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wsd");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wsd($data1, 1, $data2, 1));

var_dump("gsl_stats_wsd_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wsd_m($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wsd_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wsd_m($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wvariance_with_fixed_mean");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wvariance_with_fixed_mean($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wsd_with_fixed_mean");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wsd_with_fixed_mean($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wtss");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wtss($data1, 1, $data2, 1));

var_dump("gsl_stats_wtss_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wtss_m($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wabsdev");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wabsdev($data1, 1, $data2, 1));

var_dump("gsl_stats_wabsdev_m");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wabsdev_m($data1, 1, $data2, 1, 0.3));

var_dump("gsl_stats_wskew");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wskew($data1, 1, $data2, 1));

var_dump("gsl_stats_wskew_m_sd");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wskew_m_sd($data1, 1, $data2, 1, 0.3, 1.5));

var_dump("gsl_stats_wkurtosis");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wkurtosis($data1, 1, $data2, 1));

var_dump("gsl_stats_wkurtosis_m_sd");
$data1 = [1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2];
$data2 = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_wkurtosis_m_sd($data1, 1, $data2, 1, 0.3, 1.5));

var_dump("gsl_stats_max");
$data = [3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_max($data, 1));

var_dump("gsl_stats_min");
$data = [3, 2, 3, 2, -1, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_min($data, 1));

var_dump("gsl_stats_minmax");
$data = [3, 2, 3, 2, -1, 2, 3, 2, 3, 2, 3, 10];
$min = null;
$max = null;
gsl_stats_minmax($min, $max, $data, 1);
var_dump($min);
var_dump($max);

var_dump("gsl_stats_min_index");
$data = [3, 2, 3, 2, -1, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_min_index($data, 1));

var_dump("gsl_stats_max_index");
$data = [3, 2, 3, 2, -1, 2, 3, 2, 3, 2, 3, 10];
var_dump(gsl_stats_max_index($data, 1));

var_dump("gsl_stats_minmax_index");
$data = [3, 2, 3, 2, -1, 2, 3, 2, 3, 2, 3, 10];
$min_index = null;
$max_index = null;
gsl_stats_minmax_index($min_index, $max_index, $data, 1);
var_dump($min_index);
var_dump($max_index);

var_dump("gsl_stats_median_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_median_from_sorted_data($data, 1));

var_dump("gsl_stats_median");
$data = [11, 56, 1, 34, 5];
var_dump(gsl_stats_median($data, 1));

var_dump("gsl_stats_quantile_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_quantile_from_sorted_data($data, 1, .9));

var_dump("gsl_stats_select");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_select($data, 1, 100));

var_dump("gsl_stats_trmean_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_trmean_from_sorted_data(0.51, $data, 1));

var_dump("gsl_stats_gastwirth_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_gastwirth_from_sorted_data($data, 25));

var_dump("gsl_stats_mad0");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_mad0($data, 25));

var_dump("gsl_stats_mad");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_mad($data, 25));

var_dump("gsl_stats_Sn0_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_Sn0_from_sorted_data($data, 1));

var_dump("gsl_stats_Sn_from_sorted_data");
$data = [1, 5, 11, 34, 56];
var_dump(gsl_stats_Sn_from_sorted_data($data, 25));

var_dump("gsl_stats_Qn0_from_sorted_data");
$data = [12.6, 15.2, 16.1, 17.5, 18.3];
var_dump(gsl_stats_Qn0_from_sorted_data($data, 1));

var_dump("gsl_stats_Qn_from_sorted_data");
$data = [12.6, 15.2, 16.1, 17.5, 18.3];
var_dump(gsl_stats_Qn_from_sorted_data($data, 1));


?>
--EXPECT--
string(14) "gsl_stats_mean"
float(1)
float(1.4)
string(18) "gsl_stats_variance"
float(0)
float(0.3)
string(20) "gsl_stats_variance_m"
float(0.3)
string(12) "gsl_stats_sd"
float(0.5477225575051661)
string(13) "gsl_stats_tss"
float(1.2)
string(15) "gsl_stats_tss_m"
float(1.2)
string(34) "gsl_stats_variance_with_fixed_mean"
float(0.24)
string(28) "gsl_stats_sd_with_fixed_mean"
float(0.4898979485566356)
string(16) "gsl_stats_absdev"
float(0.48)
string(18) "gsl_stats_absdev_m"
float(1.1)
string(14) "gsl_stats_skew"
float(0.292118697336089)
string(19) "gsl_stats_skew_m_sd"
float(60.41127528730834)
string(18) "gsl_stats_kurtosis"
float(-2.253333333333333)
string(23) "gsl_stats_kurtosis_m_sd"
float(290.8559988397203)
string(30) "gsl_stats_lag1_autocorrelation"
float(-0.9166666666666666)
string(32) "gsl_stats_lag1_autocorrelation_m"
float(0.6454635108481263)
string(20) "gsl_stats_covariance"
float(-0.2727272727272727)
string(22) "gsl_stats_covariance_m"
float(3.1145454545454543)
string(21) "gsl_stats_correlation"
float(0.07881104062391005)
string(18) "gsl_stats_spearman"
float(-0.6446583712203042)
string(15) "gsl_stats_wmean"
float(3.2222222222222223)
string(19) "gsl_stats_wvariance"
float(6.5578231292517)
string(21) "gsl_stats_wvariance_m"
float(15.968571428571424)
string(13) "gsl_stats_wsd"
float(2.560824697095)
string(15) "gsl_stats_wsd_m"
float(3.996069497465156)
string(15) "gsl_stats_wsd_m"
float(3.996069497465156)
string(35) "gsl_stats_wvariance_with_fixed_mean"
float(14.489999999999998)
string(29) "gsl_stats_wsd_with_fixed_mean"
float(3.806573262134856)
string(14) "gsl_stats_wtss"
float(107.11111111111111)
string(16) "gsl_stats_wtss_m"
float(260.82)
string(17) "gsl_stats_wabsdev"
float(1.5061728395061729)
string(19) "gsl_stats_wabsdev_m"
float(2.922222222222222)
string(15) "gsl_stats_wskew"
float(1.9994421970524316)
string(20) "gsl_stats_wskew_m_sd"
float(32.79957201646089)
string(19) "gsl_stats_wkurtosis"
float(2.4812425732532066)
string(24) "gsl_stats_wkurtosis_m_sd"
float(195.71870288065836)
string(13) "gsl_stats_max"
float(10)
string(13) "gsl_stats_min"
float(-1)
string(16) "gsl_stats_minmax"
float(-1)
float(10)
string(19) "gsl_stats_min_index"
int(4)
string(19) "gsl_stats_max_index"
int(11)
string(22) "gsl_stats_minmax_index"
int(4)
int(11)
string(33) "gsl_stats_median_from_sorted_data"
float(11)
string(16) "gsl_stats_median"
float(11)
string(35) "gsl_stats_quantile_from_sorted_data"
float(1.5996441192502115E+252)
string(16) "gsl_stats_select"
float(1)
string(33) "gsl_stats_trmean_from_sorted_data"
float(9.4E-323)
string(36) "gsl_stats_gastwirth_from_sorted_data"
float(2)
string(14) "gsl_stats_mad0"
float(1)
string(13) "gsl_stats_mad"
float(1.482602218505602)
string(30) "gsl_stats_Sn0_from_sorted_data"
float(1.2975342124590806E-281)
string(29) "gsl_stats_Sn_from_sorted_data"
float(6.373052309258179E-233)
string(30) "gsl_stats_Qn0_from_sorted_data"
float(1.0996497102983598E+248)
string(29) "gsl_stats_Qn_from_sorted_data"
float(2.0596179022126888E+248)
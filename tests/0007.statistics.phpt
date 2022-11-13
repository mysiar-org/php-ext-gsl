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
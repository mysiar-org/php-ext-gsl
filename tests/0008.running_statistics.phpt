--TEST--
statistics
--EXTENSIONS--
gslext
--FILE--
<?php

$data = [17.2, 18.1, 16.5, 18.3, 12.6];

var_dump("gsl_rstat_min");
var_dump(gsl_rstat_min($data));

var_dump("gsl_rstat_max");
var_dump(gsl_rstat_max($data));

var_dump("gsl_rstat_mean");
var_dump(gsl_rstat_mean($data));

var_dump("gsl_rstat_variance");
var_dump(gsl_rstat_variance($data));

var_dump("gsl_rstat_sd");
var_dump(gsl_rstat_sd($data));

var_dump("gsl_rstat_sd_mean");
var_dump(gsl_rstat_sd_mean($data));

var_dump("gsl_rstat_rms");
var_dump(gsl_rstat_rms($data));

var_dump("gsl_rstat_skew");
var_dump(gsl_rstat_skew($data));

var_dump("gsl_rstat_kurtosis");
var_dump(gsl_rstat_kurtosis($data));

var_dump("gsl_rstat_median");
var_dump(gsl_rstat_median($data));

$data = [0.00645272, 0.0074002, 0.0120706, 0.0207256, 0.0227282];
var_dump("gsl_rstat_quantile_get");
var_dump(gsl_rstat_quantile_get($data, 0.25));

var_dump("gsl_rstat_quantile_get");
var_dump(gsl_rstat_quantile_get($data, 0.5));

var_dump("gsl_rstat_quantile_get");
var_dump(gsl_rstat_quantile_get($data, 0.75));

?>
--EXPECT--
string(13) "gsl_rstat_min"
float(12.6)
string(13) "gsl_rstat_max"
float(18.3)
string(14) "gsl_rstat_mean"
float(16.54)
string(18) "gsl_rstat_variance"
float(5.372999999999998)
string(12) "gsl_rstat_sd"
float(2.3179732526498227)
string(17) "gsl_rstat_sd_mean"
float(1.0366291525902596)
string(13) "gsl_rstat_rms"
float(16.66943310373811)
string(14) "gsl_rstat_skew"
float(-0.8290575000369654)
string(18) "gsl_rstat_kurtosis"
float(-1.2217029020861698)
string(16) "gsl_rstat_median"
float(17.2)
string(22) "gsl_rstat_quantile_get"
float(0.0074002)
string(22) "gsl_rstat_quantile_get"
float(0.0120706)
string(22) "gsl_rstat_quantile_get"
float(0.0207256)
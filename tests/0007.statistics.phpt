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
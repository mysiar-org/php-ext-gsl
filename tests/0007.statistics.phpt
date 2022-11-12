--TEST--
statistics
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump("GSL_stats_mean");
$data = [1, 1, 1, 1, 1];
$stride = 1;
$n = 5;
var_dump(GSL_stats_mean($data, $stride, $n));

$data = [1, 2, 1, 2, 1];
var_dump(GSL_stats_mean($data, $stride, $n));
?>
--EXPECT--
string(14) "GSL_stats_mean"
float(1)
float(1.4)


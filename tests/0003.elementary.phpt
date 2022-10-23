--TEST--
elementary functions
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump(GSL_log1p(1));
var_dump(GSL_log1p(1.0));
var_dump(GSL_log1p(0.0));
var_dump(GSL_log1p(-1.0));
var_dump(GSL_log1p(-2.0));
?>
--EXPECT--
float(0.6931471805599453)
float(0.6931471805599453)
float(0)
float(NAN)
float(NAN)
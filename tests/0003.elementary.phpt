--TEST--
elementary functions
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump('GSL_log1p');
var_dump(GSL_log1p(1));
var_dump(GSL_log1p(1.0));
var_dump(GSL_log1p(0.0));
var_dump(GSL_log1p(-1.0));
var_dump(GSL_log1p(-2.0));

var_dump('GSL_expm1');
var_dump(GSL_expm1(1));
var_dump(GSL_expm1(0));
var_dump(GSL_expm1(-1));
var_dump(GSL_expm1(2));
?>
--EXPECT--
string(9) "GSL_log1p"
float(0.6931471805599453)
float(0.6931471805599453)
float(0)
float(NAN)
float(NAN)
string(9) "GSL_expm1"
float(1.718281828459045)
float(0)
float(-0.6321205588285577)
float(6.38905609893065)
--TEST--
Elementary functions
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

var_dump('GSL_hypot');
var_dump(GSL_hypot(3, 4));
var_dump(GSL_hypot(5, 12));

var_dump('GSL_hypot3');
var_dump(GSL_hypot3(3, 4, 5));

var_dump('GSL_acosh');
var_dump(GSL_acosh(0.999999999999));
var_dump(GSL_acosh(1));
var_dump(GSL_acosh(2));
var_dump(GSL_acosh(2.5));

var_dump('GSL_asinh');
var_dump(GSL_asinh(1));
var_dump(GSL_asinh(0));
var_dump(GSL_asinh(-1));
var_dump(GSL_asinh(2));

var_dump('GSL_atanh');
var_dump(GSL_atanh(-1));
var_dump(GSL_atanh(0));
var_dump(GSL_atanh(0.5));
var_dump(GSL_atanh(1));

var_dump('GSL_ldexp');
var_dump(GSL_ldexp(9, 3));
var_dump(GSL_ldexp(-5, 2));
var_dump(GSL_ldexp(15, 2));

var_dump('GSL_frexp');
$e = null;
var_dump(GSL_frexp(4, $e));
var_dump($e);
$e = null;
var_dump(GSL_frexp(-4, $e));
var_dump($e);
$e = null;
var_dump(GSL_frexp(7, $e));
var_dump($e);
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
string(9) "GSL_hypot"
float(5)
float(13)
string(10) "GSL_hypot3"
float(7.0710678118654755)
string(9) "GSL_acosh"
float(NAN)
float(0)
float(1.3169578969248166)
float(1.566799236972411)
string(9) "GSL_asinh"
float(0.881373587019543)
float(0)
float(-0.881373587019543)
float(1.4436354751788103)
string(9) "GSL_atanh"
float(-INF)
float(0)
float(0.5493061443340548)
float(INF)
string(9) "GSL_ldexp"
float(72)
float(-20)
float(60)
string(9) "GSL_frexp"
float(0.5)
int(3)
float(-0.5)
int(3)
float(0.875)
int(3)
--TEST--
Small integer powers functions
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump('GSL_pow_int');
var_dump(GSL_pow_int(2, 3));
var_dump(GSL_pow_int(7, -2));

var_dump('GSL_pow_2');
var_dump(GSL_pow_2(2));
var_dump(GSL_pow_2(13.34));
var_dump(GSL_pow_2(133333.34));

var_dump('GSL_pow_3');
var_dump(GSL_pow_3(2));

var_dump('GSL_pow_4');
var_dump(GSL_pow_4(2));

var_dump('GSL_pow_5');
var_dump(GSL_pow_5(2));

var_dump('GSL_pow_6');
var_dump(GSL_pow_6(2));

var_dump('GSL_pow_7');
var_dump(GSL_pow_7(2));

var_dump('GSL_pow_8');
var_dump(GSL_pow_8(2));

var_dump('GSL_pow_9');
var_dump(GSL_pow_9(2));

var_dump('GSL_is_odd');
var_dump(GSL_is_odd(2));
var_dump(GSL_is_odd(5));

var_dump('GSL_is_even');
var_dump(GSL_is_even(2));
var_dump(GSL_is_even(5));

?>
--EXPECT--
string(11) "GSL_pow_int"
float(8)
float(0.02040816326530612)
string(9) "GSL_pow_2"
float(4)
float(177.9556)
float(17777779555.5556)
string(9) "GSL_pow_3"
float(8)
string(9) "GSL_pow_4"
float(16)
string(9) "GSL_pow_5"
float(32)
string(9) "GSL_pow_6"
float(64)
string(9) "GSL_pow_7"
float(128)
string(9) "GSL_pow_8"
float(256)
string(9) "GSL_pow_9"
float(512)
string(10) "GSL_is_odd"
bool(false)
bool(true)
string(11) "GSL_is_even"
bool(true)
bool(false)

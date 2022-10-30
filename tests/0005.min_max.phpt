--TEST--
Min & Max functions
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump('GSL_min');
var_dump(GSL_min(2, 3));
var_dump(GSL_min(2.1, 3.3));
var_dump(GSL_min('2.2', '3.4'));

var_dump('GSL_max');
var_dump(GSL_max(2, 3));
var_dump(GSL_max(2.1, 3.3));
var_dump(GSL_max('2.2', '3.4'));


var_dump('GSL_min_int');
var_dump(GSL_min_int(2, 3));

var_dump('GSL_max_int');
var_dump(GSL_max_int(2, 3));

var_dump('GSL_min_float');
var_dump(GSL_min_float(2.2, 3.3));

var_dump('GSL_max_float');
var_dump(GSL_max_float(2.2, 3.3));


?>
--EXPECT--
string(7) "GSL_min"
float(2)
float(2.1)
float(2.2)
string(7) "GSL_max"
float(3)
float(3.3)
float(3.4)
string(11) "GSL_min_int"
int(2)
string(11) "GSL_max_int"
int(3)
string(13) "GSL_min_float"
float(2.2)
string(13) "GSL_max_float"
float(3.3)

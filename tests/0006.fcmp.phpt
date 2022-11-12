--TEST--
fcmp
--EXTENSIONS--
gslext
--FILE--
<?php
var_dump('GSL_fcmp');
var_dump(GSL_fcmp(2, 3, 1));
var_dump(GSL_fcmp(20, 30, 0));
var_dump(GSL_fcmp(30, 20, 0));


?>
--EXPECT--
string(8) "GSL_fcmp"
int(0)
int(-1)
int(1)

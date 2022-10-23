--TEST--
Check if gslext is loaded
--EXTENSIONS--
gslext
--FILE--
<?php
echo 'The extension "gslext" is available';
?>
--EXPECT--
The extension "gslext" is available

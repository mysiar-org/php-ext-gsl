#!/bin/sh

set -e

echo "Building extension with PHP version:"
php --version

cd php-ext-gsl

phpize
./configure
php -dmemory_limit=-1 build/gen_stub.php --force-regeneration
sed -i 's/$user_input = fgets($fp, 10);/$user_input = "s";/g' run-tests.php
make
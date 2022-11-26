make distclean
phpize
./configure --with-gsl CFLAGS="$CFLAGS -Wno-implicit-function-declaration"
php -dmemory_limit=-1 build/gen_stub.php --force-regeneration
sed -i 's/$user_input = fgets($fp, 10);/$user_input = "s";/g' run-tests.php
make && make test
rm php_test_results_*
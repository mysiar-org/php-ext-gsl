make distclean
phpize
./configure --with-tips
sed -i 's/$user_input = fgets($fp, 10);/$user_input = "s";/g' run-tests.php
make && make test && ./tests.sh
rm php_test_results_*
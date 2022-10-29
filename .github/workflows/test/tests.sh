#!/bin/sh

set -xve

echo "Building extension with PHP version:"
php --version

cd php-ext-gsl

make test
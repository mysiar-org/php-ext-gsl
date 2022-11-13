<?php

/** @generate-class-entries */

// Elementary
function GSL_log1p(float $x): float {}
function GSL_expm1(float $x): float {}
function GSL_hypot(float $x, float $y): float {}
function GSL_hypot3(float $x, float $y, float $z): float {}
function GSL_acosh(float $x): float {}
function GSL_asinh(float $x): float {}
function GSL_atanh(float $x): float {}
function GSL_ldexp(float $x, int $e): float {}
function GSL_frexp(float $x, int &$e): float {}

// Small integer powers
function GSL_pow_int(float $x, int $n): float {}
function GSL_pow_2(float $x): float {}
function GSL_pow_3(float $x): float {}
function GSL_pow_4(float $x): float {}
function GSL_pow_5(float $x): float {}
function GSL_pow_6(float $x): float {}
function GSL_pow_7(float $x): float {}
function GSL_pow_8(float $x): float {}
function GSL_pow_9(float $x): float {}
function GSL_is_odd(int $n): bool {}
function GSL_is_even(int $n): bool {}

// Min max
function GSL_min(mixed $a, mixed $b): float {}
function GSL_max(mixed $a, mixed $b): float {}

function GSL_min_int(int $a, int $b): int {}
function GSL_max_int(int $a, int $b): int {}

function GSL_min_float(float $a, float $b): float {}
function GSL_max_float(float $a, float $b): float {}

// fcmp
function GSL_fcmp(float $x, float $y, float $epsilon): int {}

// Statistics
function gsl_stats_mean(array $data, int $stride): float {}
function gsl_stats_variance(array $data, int $stride): float {}
function gsl_stats_variance_m(array $data, int $stride, float $mean): float {}
function gsl_stats_sd(array $data, int $stride): float {}
function gsl_stats_tss(array $data, int $stride): float {}
function gsl_stats_tss_m(array $data, int $stride, float $mean): float {}
function gsl_stats_variance_with_fixed_mean(array $data, int $stride, float $mean): float {}
function gsl_stats_sd_with_fixed_mean(array $data, int $stride, float $mean): float {}
function gsl_stats_absdev(array $data, int $stride): float {}
function gsl_stats_absdev_m(array $data, int $stride, float $mean): float {}
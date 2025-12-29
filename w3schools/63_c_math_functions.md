# Math Functions in C

---

There is also a list of math functions available, that allows you to
perform mathematical tasks on numbers.

To use them, you must include the `math.h` *header file* in your
program:

```c

#include <math.h>

```

## Square Root

To find the sq. root of a number, use the `sqrt()` function:

```c

printf("%f", sqrt(16));

```

## Round a Number

The `ceil()` function rounds a number upwards to its nearest integer and
the `floor()` function rounds a number downwards to its nearest integer,
and returns the result.

```c

printf("%f", ceil(1.4));
printf("%f", floor(1.4));

```

## Power

The `pow()` function returns the value of x to the power of y (x^y).

```c

printf("%f", pow(4,3));

```

## Complete Math Reference

For a complete reference of math functions, go to our [C <math.h>
Library Reference](https://www.w3schools.com/c/c_ref_math.php).


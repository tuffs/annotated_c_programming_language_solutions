# C Type Conversion

---

Sometimes, you have to convert the value of one _data type_ to another
type. This is known as *type conversion*.

For example, if you try to divide two integers, `5` by `2`, you would
expect the result to be `2.5`. But, since we are working with integers
(and not floating-point values), the following example will just output
`2`:

```c

int x = 5;
int y = 2;
int sum = 5 / 2;

printf("%d", sum); //Outputs 2

```

The integral 2 will only go into 5 evenly 2 times. Hence, 2 as we are
working with integrals, so the output is coerced to an integer value.
Here, you COULD do the same thing with `%` the modulo (divides evenly
by) operator as well.

## The Solution

To get the right result, you need to know how *type conversion* works.
There are two types of conversion in C:
- Implicit Conversion (automatically)
- Explicit Conversion (manually)

## Implicit Conversion

Implicit conversion is done automatically by the compiler when you
assign a value of one type or another.

For example, if you assign an `int` value to a `float` type.

```c

// Automatic conversion: int to float
float myFloat = 9;
printf("%f", myFloat); // 9.00000000

```

As you can see, the compiler automatically converts the int value 9 to a
float value of `9.0000000`.
This can be risky, as you might lose control over specific values in
certain situations.

```c

// Automatic conversion: float to int
int myInt = 9.99
printf("%d", myInt);

```

What happened to `.99`? We might want that data in our program! So be
careful. It is important that you know how the compiler works in these
situations, to avoid unexpected results and unintended bugs in your
code.

```c

float sum = 5 / 2;
printf("%f", sum); // 2.000000

```

Why is the result `2.0000000` and not `2.5`? Well, it is because 5 and 2
are still integers in the division. In this case, you need to manually
convert the integer values to floating-point values (see below).

## Explicit Conversion

Explicit conversion is done manually by placing the type in parentheses
`()` in front of the value.
Considering our problem from the example above, we can now get the right
result:

```c

// Manual conversion: int to float
float sum = (float) 5 / 2
printf("%f", sum); // 2.5000000

```

You can also place the type in front of a variable:

```c

int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%f", sum); // 2.5000000

```

And, since you learned about _decimal precision_ in a previous chapter,
you could make the output even cleaner by removing the extra zeroes (if
you like):

```c

int num1 = 5;
int num2 = 2;
float sum = (float) num1/num2;

printf("%.1f", sum); // 2.5

```

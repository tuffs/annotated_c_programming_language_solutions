# C Arithmetic Operators

---

Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations:

```
Operator    Name            Description                         Example
----------- --------------- ----------------------------------- -------
+           Addition        Adds two values                     x + y
-           Subtraction     Substracts one value from another   x - y
*           Multiplication  Multiplies two values               x * y
/           Division        Divides one value by another        x / y
%           Modulus         Returns the division remainder      x % y
++          Increment       Increases value of var by 1         ++x
--          Decrement       Decreases value of var by 1         --x
```

Here is an example using different arithmetic operators in one example:

```c

int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5

```

*Note*: When dividing two integers in C, the result will also be an
integer. For example, `10 / 3` gives `3`. If you want a decimal result,
use `float` or `double` values, like `10.0 / 3`.

```c

int a = 10;
int b = 3;
printf("%d\n", a / b); // Integer division, result is 3

double c = 10.0;
double d = 3.0;
printf("%.3f\n", c / d); // Decimal division, result is 3.3333...

```

## Incrementing and Decrementing

Incrementing and decrementing are very common in programming, especially
when working with counters, loops, and arrays (which you will learn more
about in later chapters).

The `++` operator increases a value by `1`, while the `--` operator
decreases a value by 1:

```c

int x = 5;
++x; // increment x by 1
printf("%d\n", x); // 6

```

```c

int x = 5;
--x; // decrement x by 1
printf("%d\n", x); // 4

```

Sometimes you might both increment and decrement the same variables.
Remember that if you increase a value and later decrease it, it will go
up by one and then back down by one - ending up where it started.

```c

int x = 5;
++x;
--x;
printf("%d\n", x); // 5

```

## Real-Life Example: Counting People

Imagine you are building a program to count how many people enter and
leave a room. You can use `++` to increase the counter when someone
enters, and `--` to decrease it when someone leaves

```c

int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;

printf("%d\n", peopleInRoom); // 3

// 1 person leaves
peopleInRoom--;

printf("%d\n", peopleInRoom); // 2

```


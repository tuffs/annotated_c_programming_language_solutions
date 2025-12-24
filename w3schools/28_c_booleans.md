# Booleans in C

---

Very often, in programming, you will need a data type that can only have
one of two values, like:

- YES/NO
- ON/OFF
- TRUE/FALSE

For this, C has a `bool` data type, which is known as `booleans`.
Booleans represent one of two values: `true` or `false`.

## Boolean Variables

In C, the `bool` type is not a built-in data type, like `int` or `char`.

It was introduced in C99, and you must *import* the following header
file to use it.

```c

#include <stdbool.h>

```

A boolean variable is declared with the `bool` keyword and can take the
values `true` or `false`.

```c

bool isProgrammingFun = true;
bool isFishTasty = false;

```

Before trying to print the boolean variables, you should know that
boolean values are returned as *integers*
- 1 (or any other number, not 0) represents `true`
- 0 represents `false`

Therefore, you must use the `%d` format specifier to print a boolean
value.

```c

// Create boolean variables
bool isProgrammingFun = true;
bool isFishTasty = false;

// Return boolean values
printf("%d", isProgrammingFun);
printf("%d", isFishTasty);

```

However, it is more useful in programming, because it helps us to find
answers and make decisions in our logic across the application through
the use of `bool` or, booleans.


## Comparing Values and Variables

Comparing values are useful in programming, because it helps us to find
answers and make decisions.

For example, you can use a comparison operator, such as the *greater
than* (`>`) operator, to compare two values:

```c

printf("%d", 10 > 9); // 1 - true

```

From the example above, you can see that the return value is a boolean
value of (`1`).

You can also compare two variables:

```c

int x = 10;
int y = 9;

printf("%d", x > y);

```

In the example below, we use the `equal to` (`==`) operator to compare
different values:

```c

printf("%d", 10 == 10); // Returns 1 - true
printf("%d", 10 == 15); // Returns 0 - false
printf("%d", 5 == 55); // Returns 0 - false

```

You are not limited to only compare numbers. You can also compare
boolean variables, or even special structures, like arrays (which you
will learn more about in a later chapter).

```c

bool isHamburgerTasty = true;
bool isPizzaTasty = true;

// Find out if both hamburger and pizza is tasty
printf("%d", isHamburgerTasty == isPizzaTasty);

```

*Remember*: to include the `<stdbool.h>` header file when working with
`bool` variables.

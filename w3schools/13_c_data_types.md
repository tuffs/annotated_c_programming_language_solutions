# C Data Types

---

## Data Types

As explained in the Variables chapter, a variable in C must be a
specified *data type*, and you must use a *format specifier* inside the
`printf()` function to display it.

## Example

```c

// Create variables
int myNum = 5;           // Integer (whole number)
float myFloatNum = 5.99; // Floating point number
char myLetter = 'D';     // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

```

## Basic Data Types

The data type specifies the size and type of information the variable
will store.

In this tutorial, we will focus on the most basic ones.

```

int     2 or 4 bytes    Stores whole numbers, without decimals      1

float   4 bytes         Stores fractional numbers, containing
                        one or more decimals. Sufficient for
                        storing 6-7 decimal digits                  1.99

double  8 bytes         Stores fractional numbers, containing
                        one or more decimals. Sufficient for
                        storing 15 decimal digits                   1.99

char    1 byte          Stores a single char, or ASCII values       'A'

```

## Basic Format Specifiers

There are different format specifiers for each data type. Here are some
of them:

```

%d or %i        int
%f or %F        float
%lf             double
%c              char
%s              Used for strings (text) which you will learn about.

```

*Note*: it is important that you use the correct format specifier for
the specified data type. if not, the program may produce errors or even
crash.

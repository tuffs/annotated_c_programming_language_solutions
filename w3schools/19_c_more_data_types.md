# More Data Types in C (Extended)

---


Besides the basic types (`int`, `float`, `double`, `char`), C also gives
you `extended keywords` (`short`, `long`, `unsigned`) to control how
large the number is, or whether it can be negative:


```
Type              Size            Range                   Format Specifier
    
short int         2 bytes         -32,768 to 32,767                   %hd

unsigned int      2 or 4 bytes    0 to 65,535 (2 bytes)               %u

long int          4 or 8 bytes    -2,147,483,648 to                   %ld
                                  2,147,483,647 (4 bytes)
                                  -/+9,223,372,036,854,775,808 (8 bytes)

long long int     8 bytes         -9,223,372,036,854,775,808 to       %lld
                                  9,223,372,036,854,775,808

usigned long int  4 or 8 bytes    0 to 4,294,967,295 (4 bytes)         %lu
                                  0 to 18,446,744,073,709,551,615 (8 bytes)

usigned long long 8 bytes         0 to 18,446,744,073,709,551,615      %llu
int

long double       8, 12, or 16    Implementation-dependent, but more   %Lf
                  bytes           precision than `double`.
```

`unsigned` means the type can only store non-negative values (0 and up).

*Note*: The size of these types can differ between systems (for example,
2 or 4 bytes, or 4 or 8 bytes), depending on whether the computer is
older or newer, 32-bit or 64-bit, and which compiler is used.

Here is an example of how you can create and print these extended types:

```c

int normalInt = 1000;           // standard int
double normalDouble = 3.14;     // standard double

short int small = -100;         // smaller int
unsigned int count = 25;        // only positive int
long int big = 1234567890;      // larger int
long long int veryBig = 9223372036854775807; // very large int
unsigned long long int huge = 18446744073709551615U; // very large, only
positive

printf("normal int: %d\n", normalInt);
printf("normal double: %lf\n", normalDouble);
printf("small: %hd\n", small);
printf("count: %u\n", count);
printf("big: %ld\n", big);
printf("very big: %lld\n", veryBig);
printf("huge: %llu\n", huge);
printf("precise: %Lf\n", precise);

```

*Note*: these extended types are mostly used when  you need very
specific control over memory usage or number range.

*Note*: For everyday programming `int`, `float`, `double`, `char` are
usually enough.

## Check Size

_* the exact sizes depend on your system and compiler._
Remember that you can check them with the `sizeof` operator.

```c

printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of short int: %zu bytes\n", sizeof(short int));
printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long
int));
printf("Size of long double %zu bytes\n", sizeof(long double));

```

*Tip*: When you really need exact control over the size of your numbers,
you can use the fixed-width types, which you will learn about later.

*Note*: This page is just to show you that C has other extended types
available, but for now *we will keep focusing on the basic types
(`int`,`float`,`double`,`char`)* in this tutorial.

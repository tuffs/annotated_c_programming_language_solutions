# sizeof Operator in C

---

Get the Memory Size

We introduced in the data types chapter that the memory size of a variable
varies depending on the type.

```

int         2 or 4 bytes
float       4 bytes
double      8 bytes
char        1 byte

```

The memory size refers to how much space a type occupies in the
computer's memory. To actually get the size (in bytes) of a data
type or variable, use the `sizeof` operator:

```c

int myMint;
float myFloat;
double myDouble;
char myChar;

printf("%zu\n", sizeof(myint));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));

```

So, we can do something like the following as a test for an empty,
unassigned but initialized integral variable.

```c

int myVar;
printf("The size of myVar is %zu bytes\n", sizeof(myVar));

```

Note that we use the `%zu` format specifier to print the result, instead
of `%d`. This is because the compiler expects the `sizeof` operator to
return a value of type `size_t`, which is an `unsigned integer type`. On
some computers it might work with `%d`, but it is safer and more
portable to use `%zu`, which is specifically designed for printing
`size_t` values.

## Why Should I Know the Size of Data Types?

Knowing the size of data types helps you understand how much memory your
program uses. This is important when writing larger programs or working
with limited memory, because it can affect both performance and
efficiency.

For example, the size of a `char` type is `1 byte`. Which means if you
have an array of 1000 `char` values, it will occupy 1000 bytes (1 KB) of
memory.

Using the right data type for the right purpose will _save memory_ and
_improve the performance_ of your program.

You will learn more about the `sizeof()` operator later in this
tutorial, and how to use it in different scenarios.

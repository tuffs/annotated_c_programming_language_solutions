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

# Logical Operators in C

---

As with comparison operators, you can also test for true or false values
with logical operators. Logical operators are used to determine the
logic between variables or values, by combinging multiple conditions:

```
Operator    Name    Example             Description
----------- ------- ------------------- --------------------------------
&&          AND     x < 5 && x < 10     Returns 1 if both statements
                                        are true


||          OR      x < 5 || x < 4      Returns 1 if one of the
                                        statements is true

!           NOT     !(x<5&&x<10)        Reverses the result, returns 0 if
                                        the result is 1

```

## Real-Life Example: Login Check

The example below shows how logical operators can be used in a real
situation, e.g., when checking login status and access rights.

```c

int isLoggedIn = 1;
int isAdmin = 0;

printf("Regular user: %d\n", isLoggedIn && !isAdmin);
printf("Has access: %d\n", isLoggedIn || isAdmin);
printf("Not logged in: %d\n", !isLoggedIn);

```

*Remember*: In C, `1` means true and `0` means false. Logical operators
often become easier to understand once you start using them inside `if`
statements, which you will learn about in the upcoming chapters.

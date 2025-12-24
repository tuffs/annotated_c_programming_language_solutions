# C Comparison Operators

---

Comparison Operators

Comparison operators are used to compare two values (or variables). This
is important in programming, because it helps us to find answers and
make decisions.

The return value of a comparison is either `1` or `0`, which means
*true* (`1`) or *false* (`0`). These values are known as *Boolean
values*, and you will learn more about them in the Booleans and If..Else
chapter.

In the following example, we use the *greater than* operator (`>`) to
find out if 5 is greater than 3.

```c

int x = 5;
int y = 3;

printf("%d", x > y); // returns 1 (true) b/c 5 is GT 3

```

A list of all comparison operators:

```
Operator        Name        Example         Description

==              Equal To    x == y          Returns 1 if the vals eq.

!=              Not equal   x != y          Returns 1 if the vals ! eq.

>               Greater     x > y           Returns 1 if first val
                                            greater than 2nd value

<               Less        x < y           Returns 1 if first val
                                            less than 2nd value

>=              GT Eq To    x >= y          Returns 1 if first val is
                                            GT OR EQ TO second

<=              LT Eq To    x <= y          Returns 1 if first val is
                                            LT OR EQ TO second

```

## Real-Life Examples

Comparison operators are often used in real-world conditions, such as
checking if a person is old enough to vote

```c

int age = 18;

printf("%d\n", age >= 18); // 1 (true), old enough to vote
printf("%d\n", age < 18);  // 0 (false)

```

Another common use is checking if a password is long enough:

```c

int passwordLength = 5;

printf("%d\n", passwordLength >= 8); // 0 (false), too short
printf("%d\n", passwordLength < 8); // 1 (true), needs more characters

```

```

# Declaring Multiple Variables in C

---

Declare Multiple Variables 

To declare more than one variable of the same type, use a
*comma-separated* list:

```c

int x = 5, y = 6, z = 50;
printf("%d, x + y + z); // an expression for the format specifier's value

```

You can also assign the *same value* to multiple variables of the same
type:

```c

int x, y, z;
x = y = z = 50;
printf("%d", x+y+z);

```


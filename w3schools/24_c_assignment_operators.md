# Assignment Operators in C

---

Assignment operators are used to assign values to variables.

In the example below, we use the `assignment` operator (`=`) to assign
the value *10* to a variable called *x*.

```c

int x = 10;

```

The *addition assignment* operator (`+=`) adds a value to a variable:

```c

int x = 10;
x += 5;

```

A list of all assignment operators


```
Operator    Example     Same As
----------- ----------- --------------
=           x = 5       x = 5
+=          x += 3      x = x + 3
-=          x -= 3      x = x - 3
*=          x *= 3      x = x * 3
/=          x /= 3      x = x / 3
%=          x %= 3      x = x % 3
&=          x &= 3      x = x & 3
|=          x |= 3      x = x | 3
^=          x ^= 3      x = x ^ 3
>>=         x >>= 3     x = x >> 3
<<=         x <<= 3     x = x << 3

```

*Note*: Most assignment operators are just shorter ways of writing code.
For example, `x += 5` is the same as `x = x + 5`, but shorter and often
easier to read.

## Real-Life Example: Tracking Savings

Assignment operators can also be used in real-life scenarios. For
example, you can use the `+=` operator to keep track of savings when you
add money to an account:

```c

int savings = 100;
savings += 50;

printf("Total savings: %d\n", savings);

```

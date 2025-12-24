# Operator Precedence in C

---

When a calculation contains more than one operator, C follows
*arithmetic order of operations* rules to decide which part to calculate first.

For example, multiplication happens before addition:

```c

int result1 = 2 + 3 * 4;   // 2 + 12 = 14
int result2 = (2 + 3) * 4; // 5 * 4 = 20

printf("%d\n", result1);
printf("%d\n", result2);

```

## Why does this happen?

In `2 + 3 * 4`, the multiplication is done first, so the answer is `14`.

If you want the addition to happen first, you must use parens: `(2 + 3)
* 4`, which gives `20`.

*Tip*: Always use parens `( )` if you want to make sure the calculation
is done in the order you expect. It also makes you code easier to read.

## Order of Operations

This is a bit outside-the-scope of this tutorial and lesson plan,
however, it is tightly coupled with the C and other programming
languages so this has been included in case you need a refresher.

This will include newer concepts in computation and comparison that
you probably did not learn in classic arithmetic, these cases allow us
to directly compare values, couple values to be evaluated, or except
values from one another and more, logically.

- () - Parenthesis
- `*`, `/`, `%` - Mult., Div., Modulus
- `+`, `-` - Addition, Subtraction
- `>`, `<`, `>=`, `<=` - Comparisons
- `==`, `!=` - Equality Checks
- `&&` - Logical AND
- `||` - Logical OR
- `=` - Assignment

## Another Example

```c

int result1 = 10 - 2 + 5; // (10 - 2) + 5 = 13
int result2 = 10 - (2 + 5); // 10 - (2 + 5) = 3

printf("%d\n", result1);
printf("%d\n", result2);

```

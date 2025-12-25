# C Logical Operators in Conditions

---

Logical Operators in Conditions

You can combine or reverse conditions using logical operators. These
work together with `if`, `else`, and `else if` to build more complex
decisions.

- `&&` (AND) - all conditions must be true
- `||` (OR) - one condition must be true
- `!` (NOT) - reverses a condition (`true -> false, false -> true`)

## AND (`&&`)

Use AND (`&&`) when *both* conditions must be true:

## Example

Test if `a` is greater than `b`, and if `c` is greater than `a`:

```c

int a = 200;
int b = 33;
int c = 500;

if (a > b && c > a) {
    printf("Both conditions are true\n");
}

```

## OR (`||`)

Use OR (`||`) when _at least one_ of the conditions can be true.

Test if `a` is greater than `b`, _or_ if `a` is greater than `c`:

```c

int a = 200;
int b = 33;
int c = 500;

if (a > b || a > c) {
    printf("At least one condition is true\n");
}

```

## NOT (`!`)

The NOT operator (`!`) _reverses_ a condition:

- if a condition is `true`, `!` makes it `false`.
- if a condition is `false`, `!` makes it `true`.

This is useful when you want to check that something is _not_ the case.

Test if `a` is _not_ greater than `b`:

```c

int a = 33;
int b = 200;

if (!(a > b)) {
    printf("a is NOT greater than b\n");
}

```

## Real-Life Example

In real programs, logical operators are often used for access control.
For example, to get access to a system, there are specific requirements
which must be true, or flase.

You must be logged in, and then you either need to be an admin, or have
a high security clearance (level 1 or 2):

```c

#include <stdio.h>
#include <stdbool.h>


int main() {

    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1- highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted!\n");
    } else {
        printf("Access denied\n");
    }

    // Try changing securityLevel and isAdmin to test different outcomes.
    return 0;
}
```

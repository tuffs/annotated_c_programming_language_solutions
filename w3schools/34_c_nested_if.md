# Nested If

---

You can also place an `if` statement inside another `if`. This is called
a `nested if` statement. A nested `if` lets you check for a condition
only if another condition is already `true`.

```c

if (condition1) {
    // do some thing
    if (condition2) {
        // do something else as well
    }
}

```

## Example

In this example, we first check if `x` is greater than 10. If it is, we
then check if `y` is greater than 20.

```c

int x = 15;
int y = 25;

if (x > 10) {
    printf("x is greater than 10\n");

    // Nested if
    if (y < 20) {
        printf("y is also less than 20\n");
    }
}

```

## Real-Life Example

Nested `if` statements are useful when you need to test multiple
conditions that depend on each otehr. For example, checking if a person
is old enough to vote, and if they are a citizen.

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        printf("Old enough to vote.\n");
        if (isCitizen) {
            printf("And you are citizen, so you can vote!");
        } else {
            printf("But you must be a citizen to vote.\n");
        }
    } else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}

```

```

Resulting in:
- Old enough to vote.
- And you are a citizen, so you can vote!

```

Notes
- You can nest as many `if` statements as you want, but avoid making the
  code to many layers deep - it clutters the logic and becomes
unreadable.
- Nested `if` is often used together with `else` and `else if` for more
  complex decision making.

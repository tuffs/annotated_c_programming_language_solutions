# For Loop Examples

---

Real-Life Examples

To demonstrate a practical example of the `for loop`, let's create a
program that counts to 100 by tens:

```c

int i = 0;

for (i; i <= 100; i += 10) {
    printf("%d\n", i);
}

```

In this example, we create a program that only print even numbers
between 0 and 10 (inclusive):

## Example

```c

for (i = 0; i <= 10; i+=2) {
    printf("%d\n", i);
}

```

Here we only print odd numbers:

```c

for (i = 1; i < 10; i = i + 2) {
    printf("%d\n", i);
}

```

In this example we print the powers of 2 up to 512:

## Example

```c

for (i = 2; i <= 512; i *= 2) {
    printf("%d\n", i);
}

```

And in this example, we create a program that prints the multiplication
table for a specified number:

## Example

```c

#include <stdio.h>

int main() {

    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

```


# While Loop Examples in C

---

Real-Life Examples

To demonstrate a practical example of the _while loop_, we have created
a simple "countdown" program:

## EXAMPLE

```c

int countdown = 3;

while (countdown > 0) {
    printf("%d\n", countdown);
}

printf("Happy New Year!!\n");

```

In this example, we create a program that only prints even numbers
between 0 and 10 (inclusively):

```c

#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

```

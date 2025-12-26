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

In this example, we use a while loop to reverse some numbers:

```c

// A variable with some specific numbers
int numbers = 12345;

// A variable to store the reversed numbers
int revNumbers = 0;

// Reverse and reorder the numbers
while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove teh last number of 'numbers'
    numbers /= 10;
}

```

To demonstrate a practical example of the `while loop` combined with an
`if else statement`, let's say we play a game of Yatzy:

## Example

```c

int dice = 1;

while (dice <= 6) {
    if (dice < 6) {
        printf("No Yatzy\n");
    } else {
        printf("Yatzy!\n");
    }
    dice = dice + 1;
}

```

If the loop passes the values ranging from 1 to 5, it prints "No Yatzy".
Whenever it passes the value 6, it prints "Yatzy!".


# While Loops in C

---

Loops

Loops can execute a block of code as long as a specified condition is
true. Loops are handy because they save time, reduce errors, and they
make code more readable.

## While Loop

The `while` loop repeats a block of code as long as a specified
condition is `true`:

SYNTAX:
```c
while (condition) {
    // do things
}
```

In the example below, the code in the loop will run, over and over
again, as long as a variable (`i`) is less than 5:

```c

int i = 0;

while (i < 5) {
    printf("%d\n", i);
    i++
}

```

This will print an integer from 0 to 4, 0 1 2 3 4

*Note*: Do not forget to increase the variable used in the collection
(`i++`), otherwise the loop will never end!

Do you wonder why we use teh letter `i` as a variable name? It's a
couter variable and a common choice in simple loops because it's short,
traditional, and stands for `index` or `iterator`.

## Countdown Example

You can also use a `while` loop to count down. This example counts from
3 to 1, and then prints "Happy New Year!!" at the end.

```c

int countdown = 3;

while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
}
printf("Happy New Year!!");

```

## While Loop with a False Condition

In the previous examples, the condition was *true* at the start, so the
loop ran one or more times. But, if the condition is *false* at the
beginning, the code inside the loop will never run.


### Example

```c


int myVal = 0;

while (myVal > 0) {
    printf("This will not be printed!\n");
}

printf("End. Skipped while as the condition was met.");

```

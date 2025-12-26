# C Break and Continue

---

Break

You have already seen the `break` statement used in an earlier chapter
of this tutorial. It was used to "jump out" of a `switch` statement.

The `break` statement can also be used to jump out of a `loop`.

This example stops the loop when `i` is equal to `4`.

## Example

```c

int i;

for (i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    printf("%d\n", i);
}

```

Continue

The `continue` statement breaks one iteration (in the loop), if a
specified condition occurs, and continues with the next iteration in the
loop.

This example skips the value of 4:

## Example

```c

int i;

for (i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    printf("%d\n", i);
}

```

*Good to Remember*:
- `break` = stop the loop completely
- `continue` = skip this round, but keep looping.


## Combining Break and Continue

You can also combine `break` and `continue`.

This example skips printing 2 and stops the loop at 4:

```c

int i;

for (i = 0; i < 6; i++) {
    if (i == 2) {
        continue;
    }
    if (i == 4) {
        break;
    }
    printf("%d\n", i);
}

```

## Break and Continue in a While Loop

You can also use `break` and `continue` in while loops:

## Break Example

```c

int i = 0;

while (i < 10) {
    if (i == 4) {
        break;
    }
    printf("%d\n", i);
    i++;
}

```

## Continue Example

```c

int i = 0;

while (i < 10) {
    if (i == 4) {
        i++;
        continue;
    }
    printf("%d\n", i);
    i++;
}

```

## Real-Life Example

Imagine processing a list of numbers where you want to skip negative
values, but stop completely if you find a zero:

```c

int myNumbers[] = {3, -1, 7, 0, 9};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i;

for (i = 0; i < length; i++) {
    if (myNumbers[i] < 0) {
        continue; // skip negative numbers
    }
    if (myNumbers[i] == 0) {
        break; // stop loop when zero is found
    }
    printf("%d\n", myNumbers[i]);
}

```

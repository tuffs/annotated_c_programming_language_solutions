# Else If

---

The `else ... if` Statement

Use the `else if` statement to specify a new condition if the first
condition is `false`.

```c

if (condition1) {
    // ... block of code to be executed if condition1 is true
} else if (condition2) {
    // ... block of code to be executed if condition2 is true
} else {
    // ... block of code to be executed if condition1 & condition2 are false
}

```

```c

int time = 22;
if (time < 10) {
    printf("Good morning.");
} else if (time < 20) {
    printf("Good day.");
} else {
    printf("Good evening.");
}

// Outputs "Good evening."

```

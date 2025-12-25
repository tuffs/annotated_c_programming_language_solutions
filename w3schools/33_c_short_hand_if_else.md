# C Short Hand If Else

---

Short Hand If ... Else (Ternary Operator)

There is also a short-hand `if ... else`, known as the *ternary
operator* because it uses three operands.

The ternary operator _returns a value_ based on a condition. If the
condition is `true`, it returns the first value; otherwise, it returns
the second value.

It can be used to replace multiple lines of code with a single line, and
is often used to replace simple `if...else` conditional statements.

## Syntax

```c

variable = (condition) ? expressionTrue : expressionFalse;

```

Instead of Writing:

```c

int time = 20;
if (time < 18) {
    printf("Good day.");
} else {
    printf("Good evening.");
}

```

You can simply write:

```c

int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");

```

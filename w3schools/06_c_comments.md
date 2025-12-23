# Comments

---

Comments can be used to explain code, remind yourself about
features to implement, or to make things more understandable.

Comments can be *single-lined* or *multi-lined*.

## Single-Line Comments

Single-line comments start with two forward slashes (`//`).

Any text between `//` and the end of the line is ignored by the compiler
(will not be executed).

This example uses single-line comment before a line of code:

```c

// This is a comment
printf("Hello World!");

```

This example uses a single-line comment at the end of a line of code:

```c

printf("Hello World"); // This is a comment

```

## C Multi-Line Comments

Multi-line comments start with `/*` and ends with `*/`.
Any text between `/*` and `*/` will be ignored by the compiler.

```c

/* The code below will print the words Hello World!
 * to the screen, and it is amazing */
printf("Hello World!");

```

## Single-line or Multi-line comments?

It is up to you which you want to use. Normally, we use `//` for short
comments, and `/* */` for longer.

*Good to know*: Before version C99 (released in 1999), you could only
use multi-line comments in C.

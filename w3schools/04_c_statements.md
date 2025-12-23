# Statements in C

---

A *computer program* is a list of "instructions" to be "executed" by a
computer.

In a programming language, these programming instructions are called
*statements*.

The following statement "instructs" the compiler to print the text
"Hello World" to the screen:

```c
printf("Hello World");
```

It is important that you end the statement with a semicolon `;`
If you forget the semicolon (`;`), an error will occur and the program
will not run/compile.

```c
printf("Hi World")
```
`error: expected ';' before 'return'`

## Many Statements
Most C programs contain many statements.
The statements are executed, one by one, in the order as they are
written.

```c

printf("Hello World!");
printf("Have a good day!");
return 0;

```

## Double Quotes

When you are working with text, it must be wrapped inside
double-quotations marks `""`.

If you forget the double quotes, an error occurs.

## Example

```c

printf("This sentence will work!");
printf(This is an error producing sentence);

```
## Many `printf()` Functions

You can use as many `printf()` functions as you want. *However*, note
that it does not insert a new line at the end of the output.

```c

#include <stdio.h>

int main() {
    printf("Hello World!");
    printf("I am learning C.");
    printf("And it is awesome!");
    return 0;
}

```

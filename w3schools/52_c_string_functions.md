# String Functions in C

---

C also has many useful string functions, which can be used to perform
certain operations on strings.

To use them, you must include the `<string.h>` header file in your
program:

```c
#include <string.h>
```

## String Length

For example, to get the length of a string, you can use the `strlen()`
function.

```c

#include <string.h>

int main() {
    char myString[] = "my string is this big!";
    int strLength = strlen(myString);
    printf("%d\n", strLength);
    return 0;
}

```

In the Strings chapter, we used `sizeof()` to get the size of a
string/array. Note that `sizeof` and `strlen` behave differently, as
`sizeof` also includes the `\0` character when counting:

```c

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet)); // 26
printf("%zu\n", sizeof(alphabet)); // 27

```

## Concatenate Strings in C

To concatenate (combine/insert) two strings, you can use teh `strcat()`
function:


```c

#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print
    printf("%s\n", str1);
    return 0;
}

```

*Note*: that the size of `str1` should be large enough for the result
of two strings combined (20, in our example, we gave some additional
memory to the original string beyond the scope of what was needed as
a buffer).

## Copy Strings

To copy the value of one string to another, you can use the `strcpy()`
function from the string.h header file library of functions.

```c

char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);

```

*Note*: that the size of `str2` or whatevevr string must be large enough
to store the copied string (20 in our example).

## Compare Strings

To compare two strings, you can use the `strcmp()` function.

It returns `0` if the two strings are equal, otherwise a value that is
not 0:

```c

char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result

printf("%d\n, strcmp(str1,str2)); // Return 0, same data inside string

// Compare str1 and str3, and print the result.

printf("%d\n", strcmp(str1, str3));

```

## Complete String Reference

For a complete reference of string functions, go to:
[C <string.h> Library Reference](https://www.w3schools.com/c/c_ref_string.php)

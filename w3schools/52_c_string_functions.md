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

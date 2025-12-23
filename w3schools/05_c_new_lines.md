# New Lines

---

To insert a new line, you can use the `\n` character:

```c

#include <stdio.h>

int main() {
    printf("Hello World\n");
    printf("I am learning C.");
    return 0;
}

```

You can also output multiple lines with a single `printf()` function.
However, this could make the code harder to read:

```c

#include <stdio.h>

int main() {
    printf("Hello World!\nI am learning C.\nAnd it is awesome!");
    return 0;
}

```

*Tip*: Two `\n` characters after each other will create a blank line:

```c

#include <stdio.h>

int main() {
    printf("Hello World!\n\n");
    printf("I am learning C.");
    return 0;
}

```

## What actually is \n

The newline character `\n` is called an *escape sequence*, and it forces
the cursor to change its position to the beginning of the next line on
the screen. This results in a new line.

Examples of other valid escape sequences are:

```c

\t      // Creates a horizontal tab
\\      // Inserts a backslash character (\)
\"      // Inserts a double quote character

```




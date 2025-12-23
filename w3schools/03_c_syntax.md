# C Syntax

---

Syntax

You have already seen the following code a couple of times in the first
chapters. Let's break it down to understand it better:

```c

#include <stdio.h>

int main() {
    char name[] = "Devon";
    printf("Hello, %s!", name);
    return 0;
}

```

## Example Explanation

Line 1: `#include <stdio.h>` is a *header file library* that lets us
work with input and output functions, such as `printf()` (used in line
5). Header files add functionality to C programs.

"""
Don't worry if you don't understand how `#include <stdio.h>` works. Just
think of it as something that (almost) always appears in your program.
"""

Line 2: Blank line, creates visual separation of *library and code*.

Line 3: Another thing that always appears in a C program is `main()`.
This is called a *function*. Any code inside its curly braces `{}` will
be executed.

Line 4: We are establishing a character array (*string*) variable and
setting it's value.

Line 5: `printf()` is used along with a `%s` for string-insertion and a
`,` `name` after our `"Hello, %s!"` string itself.

Line 6: `return 0;` we are returning a successful program exit code and
satisfying the return type of main with an integral value.

Line 7: `}` closing bracket for the `main()` function.

"""
Note, every C statement ends with a semicolon `;`.
Also, the compiler ignores whitespace in C.
"""

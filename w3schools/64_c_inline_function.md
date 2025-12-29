# Inline Functions in C

---

You might sometimes see the `inline` keyword used in other people's
functions. It's not something you need to use often as a beginner, but
it's good to know what it means.

An _inline function_ is a small function taht asks the compiler to
insert its code _directly_ where it is called, instead of jumping to it.

This can make short, frequently used functions a little faster, because
it removes the small delay of a normal function call.

Let's compare a regular function with an inline function.

## Regular Function

```c

int square(int x) {
    return x * x;
}

```

## Inline Function

```c

inline int square(int x) {
    return x * x;
}

```

Both functiosn work the same way. The only difference is that the
`inline` version _suggests_ to the compiler to copy the function's code
directly where it is used.

## Inline Function Example

```c

#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d", add(5,3));
    return 0;
}

```

Here, the compiler might replace `add(5, 3)` with the code `5 + 3`
directly - saving teh time it would take to call a separate function.

## When Not to Use Inline

Inline functions are best for small, simple functions. Avoid using them
for:
- Large functions (they make your program bigger)
- Recursive functions
- Functions that are rarely called

Too many inline functions can make your program slower and larger, a
problem known as _code bloat_.

## inline vs Regular Function

```
Regular Function            Inline Function

Code jumps to the function  Code is inserted directly where it's called
each time it's called.

Slightly slower             Slightly Faster
(sm. delay)

Good for large functions    Good for small functions.

```

In this tutorial, we will continue to use regular functions.

## Summary
- Inline functions are defined with the `inline` keyword
- They can make small, often-used functions faster.
- The compiler decides whether to inline a function or not.
- Mostly used for short, simple functions

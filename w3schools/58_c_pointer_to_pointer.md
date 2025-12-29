# Pointer to Pointer in C

---

You can also haev a _pointer that points to another pointer._ This is
called a `pointer to pointer` (or, "double pointer").

It might sound confusing at first, but it's just one more level of
indrection; a pointer that stores the _address of another pointer_.

"""
*Think of it like this*: A normal pointer is like a note with an address
on it. A pointer to pointer is like another note telling you where the
first note is kept.

*Note*: Pointer to pointer is not something you need to use often as a
beginner. However, you might see it in more advanced programs, so it's
good to understand what it means and how it works.
"""

Let's look at a simple example to understand how this works:

```c

int myNum = 10;
int *ptr = &myNum;
int **pptr = &ptr;

printf("myNum = %d\n", myNum);
printf("*ptr = %d\n", *ptr);
printf("**pptr = %d\n", **pptr);

```

Here's what happens step by step:
- `myNum` holds the value `10`
- `ptr` holds the address of `myNum`
- `pptr` holds the address of `ptr`
- `*ptr` gives the value of `myNum`
- `**pptr` also gives the value of `myNum`, by going through both
  pointers

So:
- `*ptr` = value of `myNum`
- `**pptr` = value of `myNum` through both levels

## Changing Values Through a Pointer to Pointer

Since `**pptr` accesses the original variable, you can use it to change
the value of the variable too:

```c

int myNum = 5;
int *ptr = &myNum;
int **pptr = &ptr;

**pptr = 20; // changes myNum

printf("myNum = %d\n", myNum); // prints 20

```

## Summary
- A _pointer to pointer_ stores teh address of another pointer
- `*ptr` gives the value of a variable
- `**pptr` gives the same value by following two levels of indirection.
- They can be useful when passing _pointers to functions_ or working
  with complex data structures.


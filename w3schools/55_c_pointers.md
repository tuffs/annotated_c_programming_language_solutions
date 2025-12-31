# Pointers in C

---

## Creating Pointers

You learned from the previous chapter, that we can get the _memory
address_ of a variable with the reference operator: `&`:

```c

int myAge = 43; // an int variable

printf("%d", myAge);        // prints the value of myAge
printf("%p", &myAge);       // prints memory address of myAge

```

A _pointer_ is a variable that _stores_ the _memory address_ of another
variable as its value.

A _pointer variable points_ to a _data type_ (like `int`) of the same
type, and is created with the `*` operator.

The address of the variable you are working with is assigned to the
pointer.

```c

int myAge = 43;     // An int variable
int* ptr = &myAge;  // Pointer variable, with the name ptr
                    // that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer
printf("%p\n", ptr);

```

## Example Explained

Create a pointer variable with the name `ptr`, that _points to_ an `int`
variable (`myAge`). Note that the type of the pointer has to match the
type of the variable you're working with (`int` in our example).

use the `&` operator to store the memory address of the `myAge`
variable, and assign it to the pointer.

Now `ptr` holds the value of `myAge`'s memory address.


## Dereference

In this example above, we used the pointer variable to get the memory
address of a variable (used together with the `&` _reference_ operator).

You can also get the value of the variable the pointer points to, by
using the `*` operator (the _dereference_ operator).

```c

int myAge = 43;     // Variable Dec
int* ptr = &myAge;  // Pointer Dec

// Reference: Output the memory address of myAge with the pointer
(07xffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of the myAge with the pointer (43)
printf("%d\n", *ptr);

```

*Note*: that the `*` sign can be confusing here, as it does two
different things in our code:

- When used in declaration (`int* ptr`), it creates a _pointer
  variable_.
- When not used in declaration, it acts as a _dereference operator_.

*Good to Know*: There are two ways to declare pointer variables in C.

```c

int* myNum;
int *myNum;

```

*Notes on Pointers*

Pointers are one of the things that make C stand out from other
programming languages, like Python or Java.

They are important in C, because they allow us to manipulate the data in
the computer's memory. This can reduce the code and improve the
performance. If you are familiar with data structures like lists, trees,
and graphs, you should know that pointers are especially useful for
implementing those. And sometimes you even have to use pointers, for
example when working with files and memory management.

*But be careful*; pointers must be handled with care, since it is
possible to damage data stored in other memory addresses.


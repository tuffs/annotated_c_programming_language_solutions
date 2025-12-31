# Function Pointers in C

---

A `function pointer` is like a normal pointer, but instead of pointing
to a variable, it points to a function.

This means it stores the _addresses of a function_, allowing you to call
that function using the pointer.

Function pointers let you decide which function to run while the program
is running, or when you want to pass a function as an argument to
another function.

Think of it like saving a phone number - the pointer knows _where_ the
function lives in memory, so you can "call" it later.

## Declaring a Function Pointer

The general syntax for declaring a function pointer is:

```c

returnType (*pointerName)(parameterType1, parameterType2, ...);

```

For example:

```c

int (*ptr)(int, int);

```

This means `ptr` is a pointer to a function that takes two `int` values
and returns an `int`.

## Assigning a Function to a Pointer

You can assign a function to a pointer in two ways:

```c

ptr = add;
ptr = &add;

```

Both are the same, because the function's name already represents its
address in memory.

## Calling a Function Through a Pointer

Once the pointer is assigned, you can call the function in two ways:

```c

ptr(5, 3);
(*ptr)(5, 3);

```

Both are valid and do the same thing.

## Function Pointer Example

Now that you know how to declare and assign a function pointer, let's
see a complete example:

```c

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int) =  add;
    int result = ptr(5, 3);
    printf("Result: %d", result);

`    return 0;
}

```



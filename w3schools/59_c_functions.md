# Functions in C

---

A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, anad they are important
for reusing code: Define the code once, and use it many times.

## Predefined Functions

So it turns out you already know what a function is. You have been using
it the whole time while studying this tutorial!

For example, `main()` is a function, which is used to execute code, and
`printf()` is a function; used to output/print text to the screen.

```c

int main() {
    printf("Hello World!");
    return 0;
}

```

## Create a Function

To create (often referred to as _declare_) your own function, specify
the name of the function, followed by parentheses `()` and curly
brackets `{}`.

```c

void myFunction() {
    // ..
}

```

- `myFunction()` is the name of the function.
- `void` means that the function does not have a return value. You will
learn more about return values later in the next chapter.
- Inside the function (the body), add code that defines what the
  function should do

## Call a Function

Declared functions are not executed immediately. They are "saved for
later use", and will be executed when they are called.

To call a function, write the function's name following by two
parentheses `()` and a semicolon `;`.

In the following example, `myFunction()` is used to print a text (the
action), when it is called.


Inside `main`, call `myFunction()`.

```c

void myFunction() {
    printf("I just got executed! (myFunction())");
}

int main() {
    myFunction();
    return 0;
}

```

A function may be called multiple times, and they often are.

```c

void myFunction() {
    printf("I just got executed!");
}

int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

```

## Calculate the Sum of Numbers

You can put almost whatever you want inside a function. The purpose of
the function is to save the code, and execute it when you need it.

Like in the example below, we have created aa function to calculate the
sum of two numbers. Whenever you are ready to execute the function (and
perform the calculation), you just call it:

```c

void calculateSum() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of x + y is: %d", sum);
}

int main() {
    calculateSum();
    return 0;
}

```

This was just an example to demonstrate a simple function with different
statements in C. The real power of a function is revealed in the next
chapter, when we pass "parameters" to it. This allows the function to
calculate the sum of _any_ numbers, instead of being limited to the
fixed values `5` and `10`.


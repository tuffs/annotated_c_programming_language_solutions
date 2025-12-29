# Function Declaration and Definition in C

---

You have already learned from the previous chapters that you can create
and call a function in the following way:

```c

// Create a function
void myFunc() {
    printf("I just got executed!");
}

int main() {
    myFunc(); // call the function
    return 0;
}

```

A function consists of two parts:
- `Declaration` the function's name, return type, and params (if any)
- `Definition` the body of the function (code to be executed)

```c

void myFunc() { // (declaration)
    // (definition)
}

```

For code optimization, it is recommended to separate the declaration and
the definition of the function.

You will often see C program that have function declaration above
`main()`, and function definition below `main()`.

This will make the code better organized and easier to read:

```c

void myFunc();

int main() {
    myFunc();
    return 0;
}

// Func Def
void myFunc() {
    printf("I just got executed!");
}

```

## What About Parameters

If we use the example from the function parameters chapter regarding
parameters and return values:

```c
// BAD EXAMPLE

int myFunc(int x, int y) {
    return x + y;
}

int main() {
    int res = myFunc(5,3);
    printf("Result is = %d", result);
    return 0;
}

```

It is considered good practice to write it like this instead:

```c

// Function Dec
int myFun(int x, int y);

// The Main Method
int main() {
    int res = myFun(5, 3); // call the function
    printf("Result is = %d", result);
    return 0;
}

// Func Def
int myFunc(int x, int y) {
    return x + y;
}

```

## Functions Calling Other Functions

As long as you declare functions first, it is also possible to use
functions to call other functions:

Use one function to call another function:

```c
// Dec two funcs, myFun, and myOtherFun
void myFunc();
void myOtherFunc();

int main() {
    myFunc();
    return 0;
}

// Def myFunc
void myFunc() {
    printf("Some text in myFunc\n");
    myOtherFunc(); // call to myOtherFun (from myFunc)
}

void myOtherFunc() {
    printf("Hey! Some text in myOtherFunc!\n");
}

```

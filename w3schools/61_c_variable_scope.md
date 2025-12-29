# Variable Scope in C

---

Now that you understand how functions work, it is important to learn how
variables act inside and outside of functions.

In C, variables are only accessible inside the region (code-block) they
are created within. This is called _scope_.

## Local Scope

A variable created inside a function belongs to the _local scope_ of
that function, and can only be used inside that function:

```c

void myFunc() {
    int x = 5;

    printf("%d", x);
}

int main() {
    myFunc();
    return 0;
}

```

A _local variable_ cannot be used outside of the function it belongs to.
If you try to access it outside the function, an error occurs.

```c

// [ERRORING EXAMPLE]

void myFunc() {
    // Local var that belongs to myFunc()
    int x = 5;
}

int main() {
    myFunc();

    // Print the variable x in the main function
    printf("%d", x);

    return 0;
}

```

## Global Scope

A variable crated outside of a function, is called a _global variable_
and belongs to the _global scope_. Global variables are available from
within any scope, global and local:

```c

int x = 5;

void myFunc() {
    printf("%d", x);
}

int main() {
    myFunc();
    
    // We can also use x here... (globally scoped)
    printf("%d", x);

    return 0;
}

```

## Naming Variables

If you operate with the same variable name inside and outside of a
function, C will treat them as two separate variables; One available in
the global scope (outside the function) and one available in the local
scope (inside the function):

```c

// Global var x
int x = 5;

void myFunc() {
    int x = 22;
    printf("%d\n", x);
}

int main() {
    myFunc();

    printf("%d\n", x); // Global var referred to
    
    return 0;
}

```

However, you should avoid using the same variable name for both globally
and locally variables as it can lead to errors and confusion.

In general, you should be careful with global variables, since they can
be accessed and modified from any function.

Change the value of `x` from `myFunction`:

```c

// Global var
int x = 5;

void myFunc() {
    printf("%d\n", ++x); // Increment the value of x by 1 and print
}

int main() {
    myFunc();

    printf("%d\n", x); // Prints the global value of x

    return 0;
}

```

## Conclusion

To sum up, use local variables (with good variable names) as much as you
can. This will make your code easier to maintain and better to
understand. However, you may find global variables when working on
existing C programs or while collaborating with others. Therefore, it is
good to understand how the scope works and how to use it effectively to
make sure your code is clear and functional.


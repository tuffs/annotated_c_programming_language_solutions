# Function Parameters in C

---

Information can be passed to functions as a parameter. Parameters act as
variables inside the function.

Parameters are specified after the function name, inside the
parentheses. You can add as many parameters as you want, just seperate
them with a comma.

```c

returnType functionName(param1, param2, param3) {
    // code to be executed
}

```
In the example below, the function takes a _string of characters_ with
*name* as a parameter. When the function is called, we pass along a
name, which is used inside the function to print "Hello" and the name of
each person.

```c

void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

int main() {
    myFunction("Matt");
    myFunction("Joseph");
    myFunction("Devon");

    return 0;
}

```

"""
When a `parameter` is passed to the function, it is called an
`argument`. So, from the example above: `name` is a `parameter`, while
`Liam`, `Jenny`, `Anja` are _arguments_.
"""

## Multiple Parameters

Inside the function, you can add as many parameters as you want.

```c

void myFunc(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
    myFunc("Liam", 3);
    myFunc("Jenny", 14);
    myFunc("Anja", 30);

    return 0;
}

```

If we consider the *Calculate the Sum of Numbers* _example from the
previous page_, we can make a more sustainable program by using function
parameters.

```c

void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);

    return 0;
}

```

## Notes on Parameters

note that when you are working with multiple parameters, the function
call must have the same number of arguments as there are parameters, and
the arguments must be passed in the appropriate order, sequentially.

## Pass Arrays as Function Parameters

You can also pass _arrays_ to a function:

```c

void myFunc(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}

int main() {
    int myNumbers[5] = {10,20,30,40,50};
    myFunctions(myNumbers);

    return 0;
}

```

## Example Explained

The function (`myFunction`) takes an array as its parameter (`int
myNumbers[5]`), and loops through the array elements with the `for`
loop.

When the function is called inside `main()`, we pass along the
`myNumbers` array, which outputs the array elements.

*Note*: that when you call the function, you only need to use the name
of the array when passing it as an argument `myFunction(myNumbers)`.
however, the full declaration of the array is needed in the function
parameter (`int myNumbers[5]`).

## Return Values

The `void` keyword, used in the previous examples, indicates that the
function shot not return a value. If you want the function to return a
value, you can use a data type (such as `int` or `float`, etc.) instead
of `void` and use the `return` keyword inside the function.

```c

int myFunction (int x) {
    return 5 + x;
}

int main() {
    printf("Result is: %d", myFunction(3));
    return 0;
}

```

This example returns the sum of a function with `two parameters`:


```c

int sumFunc(int x, int y) {
    int sum = x + y;
    return sum;
}

int main() {
    printf("Result is: %d\n", sumFunc(5,10));
    return 0;
}

// Outputs 15 = x: 5 + y: 10

```

You can also store the result in a variable.

```c
int sumFunc(int x, int y) {
    return x + y;
}

int main() {
    int result = sumFunc(5, 3);
    printf("Result is = %d", result);
    return 0;
}

// Outputs: 8, 5 + 3

```

If we consider the `Calculate the Sum of Numbers` example one more time,
we can use `return` instead and store the results in different
variables. This will make the program even more flexible and easier to
control:

```c

int calculateSum(int x, int y) {
    return x + y;
}

int main() {
    int res1 = calculateSum(5,3);
    int res2 = calculateSum(8,2);
    int res3 = calculateSum(15,15);

    printf("Result1 is: %d\n", res1);
    printf("Result2 is: %d\n", res2);
    printf("Result3 is: %d\n", res3);

    return 0;
}

```

*Tip*: If you have many "result variables", it is better to store the
results in an array:

```c

int calculateSum(int x, int y) {
    return x + y;
}

int main() {
    // Create an array
    int resultArr[6];

    resultArr[0] = calculateSum(5,3);
    resultArr[1] = calculateSum(8,2);
    resultArr[2] = calculateSum(15,15);
    resultArr[3] = calculateSum(9,1);
    resultArr[4] = calculateSum(7,7);
    resultArr[5] = calculateSum(1,1);

    for (int i = 0; i < 6; i++) {
        printf("Result%d is = %d\n", i + 1, resultArr[i]);
    }

    return 0;
}

```

## Real-Life Examples

To demonstrate a practical example of using functions, let's create a
program that converts a value from fahrenheit to celsius:


```c

// Fn to conv Fahr. to Celsius
float toCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    // Set a fahrenheit value
    float f_value = 98.8;

    // Call the func for Celsius val
    float result = toCelsius(f_value);

    // Print the Fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);

    // Print the Celsius resulting value:
    printf("Conv Fahrenheit to Celsius: %.2f\n", result);

    return 0;
}

```

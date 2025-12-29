# Pointers and Arrays in C

---

You can also use pointers to access arrays. Consider the following array
of integers.

```c

int myNumbers[4] = {25,50,75,100};

```

You learned from the arrays chapter that you can loop through the array
elements with a `for` loop:

```c

int myNumbers[4] = {25,50,75,100};
int i;

for (i = 0; i < 4; i++) {
    printf("%3d\n", myNumbers[i]);
}

```

Result:

```
 25
 50
 75
100
```

*Note*: I have added a 3 prior to the decimal format specifier,
this adds an additional layer to our formatting and tells that
we want the output of %d to be 3 units in width, thus, aligning
the digits in a row, accounting style, right-hand aligned, in
this case.

Instead of printing the value of each array element, let's print the
memory address of each array element:

```c

int myNumbers[4] = {25,50,75,100};
int i;

for (i = 0; i < 4; i++) {
    printf("%p\n", &myNumbers[i]);
}

```

Result:

```
0x7ffcb1c64870
0x7ffcb1c64874
0x7ffcb1c64878
0x7ffcb1c6487c

```

*Note* that the last number of each of the elements' memory address is
different with an ddition of 4. This is because the size of an `int`
type is typically 4 bytes, remember?

```c

// Create an int variable
int myInt;

// Get the memory size of an integer
printf("%zu", sizeof(myInt)); 


// RESULT: 4 (bytes).

```

So from the "memory address example" above, you can see that the
compiler reserves `4 bytes` of memory for each array element, which
means that the entire array takes up `16 bytes (4 x 4)` of memory
storage and addressing.

```c
int myNumbers[4] = {25,50,75,100};

// Get the size of the myNumbers array
printf("%zu", sizeof(myNumbers);

// RESULT: 16 (bytes)

```

## How Are Pointers Related to Arrays

---

Ok, so what's the relationship between pointers and arrays? Well, in C,
the _name of an array_, is actually a _pointer_ to the _first element_
of the array.

Confused? Let's try to understand this better, and use our "memory
address example" above again.

The `memory address` of the `first element` is the same as the `name of
the array`:

```c

int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", myNumbers[0]);

```

This basically means that we can work with arrays through pointers!

How? Since myNumbers is a pointer to the first element in myNumbers, you
can use the `*` operator to access it:

```c

int myNumbers[4] = {25,50,75,100};

// Get the value of the first element in myNumbers
printf("%d\n", *myNumbers);

```

To access the rest of the elements in myNumbers, you can increment the
pointer/array (+1, +2, etc.)

```c

int myNumbers[5] = {25,50,75,100,125};
int arrLength, index;

arrLength = sizeof(myNumbers) / sizeof(myNumbers[0]);

index = arrLength // 2;

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers + 1)); // 50

// Half of length item, rounded UP.
printf("%d\n", *(myNumbers + index)); // 75

```


## Or, loop through it

```c

int myNumbers[4] = {25,50,75,100};
int *ptr = myNumbers;
int i;

for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
}

```

It is also possible to change the value of array elements with pointers:


```c

int myNumbers[4] = {25,50,75,100};

// Change the value of the first element to 13
*myNumbers = 13;

// Change the value of the second element to 17
*(myNumbers +1) = 17;

// Get the value of the 1st element
printf("%d\n", *myNumbers);

// Get the value of the 2nd element
printf("%d\n", *(myNumbers + 1));

```

"""
This way of working with arrays might seem a bit excessive. Especially
with simple arrays like in the examples above. However, for large
arrays, it can be much more efficient to access and manipulate arraysd
with pointers.

It is also considered faster and easier to access two-dimensional arrays
with pointers.

And since strings are actually arrays, you can also use pointers to
access strings.

For now, it's great that you know how this works. But like we specified
in the previous chapter; _pointers must be handled with care_, since it
is possible to overwrite other data stored in memory.
"""

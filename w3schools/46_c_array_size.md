# Array Sizes in C

---

## Get Array Size

To get the size of an array, you can use the `sizeof` operator.

```c

int myNumbers[] = {10, 25, 50, 75, 100};
printf("%zu", sizeof(myNumbers)); // Prints 20

```

## sizeof() is an operator denotes BYTE size in MEMORY
This means that the size of something in bytes is returned.
So, the above code will return 20 because the byte size of the
myNumbers array is 20.

*Note*: Why did the result show `20` instead of `5`, when the
array contains 5 items?

- The allocation of memory is being measured with `sizeof`

You learned from the `Data Types chapter` than `int` type is usually
`4` bytes, so from the example above, (`4 bytes` x `5 elements` = `20 bytes`).

Knowing the memory size of an array is great when you are working with
larger programs that require good memory management.

But, what if you just wanted to know how many elements the array
was storing?

## Get the Number of Elements

If you want to find out how many elements an array has, you can use
this formula, which divides the total size of the array by the size
of one element.


```c

int myNumbers[] = {10,25,50,75,100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

printf("%d\n", length);

```

The `sizeof()` formula works for arrays of any type and size:

```c

double myValues[] = {1.1, 1.2, 1.3, 1.4};
int length = sizeof(myValues) / sizeof(myValues[0]);

printf("myValues[] has %d\n elements", length);

```

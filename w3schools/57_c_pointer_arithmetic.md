# Pointer Arithmetic in C

---

`Pointer arithmetic` means changing the value of a point to make it
point to a different element in memory.

Like we saw on the previous page, array elements are stored next to each
other in memory. So if a pointer points to one element, adding `1` moves
it to the next one:

```c

int myNumbers[4] = {25,50,75,100};
int *p = myNumbers;

printf("%d\n", *p);       //  25
printf("%d\n", *(p + 1)); //  50
printf("%d\n", *(p + 2)); //  75
printf("%d\n", *(p + 3)); // 100

```

## Increment and Decrement

You can move a poitenr with `++` and `--` (and with `+=` / `-=`)

```c

int myNumbers[3] = {10,20,30};
int *p myNumbers;

printf("%d\n", *p); // 10
p++;    // moves to myNumbers[1]
printf("%d\n", *p); // 20
p--;    // moves to myNumbers[0]
printf("%d\n", *p); // 10

p += 2; // jumps to myNumbers[2]
printf("%d\n", *p); // 30

```

This shows that you can move a pointer just like a counter: each time
you use `p++` or `p--`, it moves to teh next or previous element in the
array.

## Pointer Subtraction (Distance)

You can subtract two pointers that point to elements in the _same array_
to find out how many elements are between them:

```c

int myNumbers[5] = {10, 20, 30, 40, 50};
int *start = &myNumbers[1]; // points to 20
int *end = &myNumbers[4]; // points to 50

printf("%ld\n", end - start); // 3 elements apart

```

Here:
- `start` `points` to the second element (20)
- `end` `points` to the fifth element (50)
- `end - start` gives the number of elements between them: `3`

*Note*: Pointer subtraction only works when both pointers point into the
same _array_. The result is measured in _elements_, not bytes. It gives
the distance in elements with an integer representation of the
difference.

## Pointer Arithmetic Depends on Type

Not all pointers move the same way.

When you add `1` to a pointer, it moves forward by the size of the thing
it points to- not just by 1 byte.

For Example
- An `int*` pointer moves by teh size of an integer (usually, 4 bytes)
- A `char*` pointer moves by the size of a character (1 byte)

So if both pointers start at memory address `1000`:

- `int* -> p + 1` would move to address `1004`;
- `char& -> p + 1` would move to address `1001`;

This shows that pointer movement depends on the data type it points to -
not on the number you add.

```c

int myNumbers[2] = {1,2};
char letters[] = "Hi";

int *pi = myNumbers; // int pointer
char *pc = letters; // char pointer

printf("%p\n", (void*)pi);
printf("%p\n", (void*)(pi + 1)); // moves by sizeof(int) (4 bytes)
printf("%p\n", (void*)(pi + 2)); // moves by sizeof(int) (4 bytes)

printf("%p\n", (void*)pc);
printf("%p\n", (void*)(pc + 1)); // moves by 1 byte

```

## Looping with Pointers in C

In the previous chapter, you learned how to loop through an array using
`*(ptr + i)`.

Now let's look at another way - by _moving the pointer itself_ inside
the loop. Each time the pointer is increased (`p++`), it moves to the
next element in memory.

```c

int myNumbers[4] = {25,50,75,100};
int *p = myNumbers; // start of the array (ref)

for (int i = 0; i < 4; i++) {
    printf("%d\n", *p);
    p++;
}

```

Here's what happens in each loop:

- `*p` gives the current element value
- `p++` moves the pointer to the next element in the array.
- no array index (`i`) is needed - the pointer keeps track of the
  position.

*Tip*: This way of learning is common when working directly with memory,
since the pointer itself moves through the array instead of using an
index number.

## Common Mistakes to Avoid

- `using the wrong type`: remember that pointer movement depends on its
  type. An `int*` moves in 4-byte steps, but a `char *` moves 1 byte at
  a time. Mixing them up will point to the wrong memory locations.
- `uninitialized pointers`: always make sure a pointer is pointing to
  something real before you use it. Using a pointer is pointing to
  something real before you use it. Using a pointer that doesn't point
  anywhere can crash your program.
- `going out of bounds`: never move a pointer past the end of an array
  or before it starts. The only safe "outside" position is _one step past
  the end_, and that's only for comparing pointers - not for accessing
  values.

And be careful; pointers must be handled with care, since it is possible
to damage data stored in other memory addresses!


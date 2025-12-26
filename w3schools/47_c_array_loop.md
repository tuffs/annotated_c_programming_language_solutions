# Array Loops in C

---

You can use a `for` loop to go through the elements of an array by
writing the size of the array in the loop condition (in this example
the array has 4 elements, so we use `i < 4`). However, this is not
ideal, since it will only work for arrays of a specified size signature

```c

int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
}


```

## Making Better Loops

In the `previous chapter` you learned how to calculate the number of
elements in an array using the `sizeof()` formula. Now we can use that
to write loops that work for arrays of any size. This is more flexible
and sustainable.

```c

int myNumbers[] = {25,50,75,100};

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i;

for (i = 0; i < length; i++) {
    printf("%d\n", myNumbers[i]);
}

```

This loop will work no matter how many elements the Ărray has!

## Summary

Always use the `sizeof formula` when you are looping through arrays!

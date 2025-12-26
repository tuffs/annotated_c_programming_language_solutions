# Arrays in C (real-life exapmles)

---

To demonstrate a practical example of using arrays, let's create a
program that calculates the average of different ages:

```c

int ages[] = {20,22,18,35,48,26,87,70};

float avg, sum = 0;
int i;

// Get the length of the array
int lengthOfArray = sizeof(ages) / sizeof(ages[0]);


// Loop through the elements of the array
for (i = 0; i < lengthOfArray; i++) {
    sum += ages[i];
}

avg = sum / lengthOfArray;
printf("The average age provided was: %.2f\n", avg);

```

And in this example, we create a program that finds the lowest
age among different ages:


```c

// An array storing different ages
int ages[] = {20,22,18,35,48,26,87,70};
int evalAge = ages[0];
int i;

// Get the length
int arrLen = sizeof(ages) / sizeof(evalAge);

for (i = 0; i < arrLen; i++) {
    if (evalAge < ages[i]) {
        continue;
    } else {
        evalAge = ages[i];   
    }
}

printf("The lowest age is: %d\n", evalAge);

```

In this example, we go through a list of numbers. We skip negative
values, but stop the loop completely if we find a zero.

```c

int myNumbers[] = {3, -1, 7, 0, 9};
int arrLen = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i;

for (i = 0; i < arrLength; i++) {
    if (myNumbers[i] < 0) {
        continue;
    }
    if (myNumbers[i] == 0) {
        break;    
    }
    printf("%d\n", myNumbers[i]);
}

return 0;

```

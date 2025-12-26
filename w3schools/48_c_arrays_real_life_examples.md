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


```

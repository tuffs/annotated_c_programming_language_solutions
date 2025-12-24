## C Variables - Examples

---

Real-Life Example

Often in our examples, we simplify variable names to match their data
type (myInt or myNum for `int` types, myChar or `char` types, and so
on). This is done to avoid confusion.

However, for a practical example of using variables, we have created a
program that stores different data about a college student:

```c

// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'F';

// Print Variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %f\n", studentFee);
printf("Student grade: %c\n", studentGrade);

```

## Calculate the Area of a Triangle

In this example we will create a program to calculate the area of a
rectangle (by multiplying the length by the width):

```c

// Create integer variables
int length = 4;
int width = 6;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print variables
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);
printf("Area is: %d", area);

```


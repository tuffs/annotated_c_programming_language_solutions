# C If ... Else Examples

---

Real-Life Examples

This example shows how you can use `if...else` to "open a door" if the
user enters the correct code.


```c

int passcode = 1234;

if (passcode = 1234) {
    printf("Correct code.\nThe door is now open.");
} else {
    printf("Wrong code.\nThe door remains closed.");
}

```

This example shows how you can use `if..else` to find out if a number is
positive or negative.

```c

int myNum = 10; // Is this a positive or negative integral?

if (myNum > 0) {
    printf("The value is a positive number.");
} else if (myNum < 0) {
    printf("The value is a negative number.");
} else {
    printf("The value is 0.");
}

```

Find out if someone is old enough to vote.

```c

int age = 12;
int votingAge = 18;
bool citizenship = true;

if (citizenship && (age >= votingAge)) {
    printf("You can vote.");
} else {
    printf("You can not vote.");
}

```
Find out if a number is even or odd.

```c

int myNum = 5;

if (myNum % 2 == 0) {
    printf("%d is even.\n", myNum);
} else {
    printf("%d is odd.\n", myNum);
}

```

Check the temperature in Celsius

```c

int temperature = 30;

if (temperature < 0) {
    printf("It's freezing.\n");
} else if (temperature < 20) {
    printf("It's cool.\n");
} else {
    printf("It's warm.\n");
}

```



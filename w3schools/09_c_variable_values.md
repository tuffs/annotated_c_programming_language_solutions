# Variable Values in C

---

Change Variable Values

If you assign a new value to an existing variable, it will _overwrite_
the previous value:

```c

int myNum = 15; // myNum is 15
myNum += 5; // myNum is now 20

```

You can also assign the value of one variable to another

```c

int myTotal;
int myEggs = 3;
int myToast = 1;
myTotal = myEggs + myToast;

printf("%d is my total", myTotal);

```

Or copy values to empty variables

```c

int myNum = 15;

int myOtherNum;

myOtherNum = myNum;

printf("%d", myOtherNum); // myNum's value of 15 printed to std out

```

Add Variables Together

```c

int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);

```



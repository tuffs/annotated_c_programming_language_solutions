# Constants

---

Now that you have seen different types of variables in C, you should
also know that sometimes you need variables that should not change.

This can be done with the `const` keyword, which makes a variable
*unchangeable* and *read-only*.

```c

const int myNum = 15; // myNum will always be 15
myNum = 10; // error: assignment of read-only variable 'myNum'

```

You should always declare a variable as `const` when you have values
that are unlikely to change:

```c

const int minutesPerHour = 60;
const int monthsInYear = 12;

```

## Notes on Constants

When you declare a constant variable, it must be assigned with a value:

```c

const int minutesPerHour = 60;

```

THIS WILL *NOT* WORK:

```c

const int minutesPerHour;
minutesPerHour = 60;
// error: assignment of read-only variable 'minutesPerHour'

```

## Good Practice

Another thing about constant variables, is that it is considered good
practice to declare them with uppercase.

It is not required, but it is tremendously popular and proper. Also, at
the top of the file or scope, declare these.

```c

const int BIRTHYEAR = 1980;

```



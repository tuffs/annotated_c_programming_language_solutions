# C Character Data Types

---

The `char` Type

The `char` data type is used to store a `single` character.
The character must be surrounded by single quotes, like 'A' or 'c', and
we use the `%c` format specifier to print it:

```c

char myGrade  = 'A';
printf("%c", myGrade);

```

Alternatively, if you are familiar with ASCII, you can use ASCII values
to display certain characters. Note that these values are not surrounded
by quotes (`''`), as they are numbers.

```c

char a = 65, b = 66, c = 67;
printf("%c", a);
printf("%c", b);
printf("%c", c);

```

*Tip*: A list of all ASCII values can be found in our ASCII Table
Reference

## Notes on Characters

If you try to store more than a single character, it will only print the
last character.

```c

char myText = 'Hello';
printf("%c", myText); // prints the last character only

```

*Note*: Don't use the `char` type for storing multiple characters, as it
may produce errors.

To store multiple characters (or whole words), use _strings_ (which you
will learn more about in a later chapter).

```c
char myText[] = 'Hello';
printf("%s", myText);

```
*Note*: the difference between `'%c'` and `'%s'` for `character` or
`string`.



# C Strings

---

Strings

Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a *String type*
to easily create string variables. Instead, you must use the `char` type
and create an array of characters to make a string in C:


```c

char greetings[] = "Hello World!";

```

Note that you have to use double quotes (`" "`).

```c

char myString[] = "My Value";

```

To output the string, you can use the `printf()` function together with
the format specifier `%s` to tell C that we are now working with
strings:

```c

char greetings[] = "Hello World";
printf("%s", greetings);

```

## Access Strings

Since strings are actually arrays in C, you can access a string by
referring to its index number inside square brackets `[]`.

This example prints the `first character (0)` in `greetings`:

```c

char greetings[] = "Hello World!";
printf("%c", greetings[0]);

```

*Note*: that we have to use the `%c` format specifier to print a `single
character`.

## Modify Strings

To change the value of a specific character in a string, refer to the
index number, and use `single quotes`.

```c

char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);

// Outputs Jello World! instead of Hello World!

```

## Loop Through a String

You can also loop through the characters of a string, using a `for` loop

```c

char carName[] = "Volvo";
int i;

for (i = 0; i < 5; i++) {
    printf("%c\n", carName[i]);
}

```

And like we specified in the arrays loop chapter, you should use the
_sizeof formula_ (instead of manually write the size of the array in the
loop condition (`i < 5`) to make the loop more sustainable.

```c

char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i;

for (i = 0; i < length; i++) {
    printf("%c\n", carName[i]);
}

```

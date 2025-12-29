# Special Characters in C

---

Because strings must be written within quotes, C will misunderstand this
string, and generate an error:

```c

char txt[] = "We are so-called "Vikings" from the North.";
printf("%s\n", txt);

```

So, the problem here is that we have `nested` double quote characters
inside of double quote characters. So, we fix this by using an escape
character `\` which turns special characters into string characters:

```
Escape Char     Result      Description
\'              '           Single Quote
\"              "           Double Quote
\\              \           Backslash (or, Floor Division Operator
                                       outside of strings).

```

The sequence `\"` inserts a double quote into a string (with double
quotes).

```c

char txt[] = "We are the so-called \"Vikings\" from the North.";
printf("%s\n", txt);

```

The sequence `\'` inserts a single quote in a string:

```c

char text[] = "It\'s alright.";

```

Other popular escape characters in C are:

```
Escape Character        Result
\n                      New line
\t                      Tab
\)\0                    Null (Terminator)

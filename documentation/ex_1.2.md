# Exercise 1.2, "The C Programming Language"

# VARIALBE DECLARATION w/ TYPES

---

You will note that each variable that you use in the C programming language MUST be decalred prior to the assignment of any value to that variable, it can be assigned combinatorally on instantiation but it must be declared first.

This is precisely why when we look at the example code in the second example where variables are used
the authors have had to define:

1. that a variable will be used,
2. what the name of that variable will be and
3. what TYPE of data that variable will hold

All three conditions must be met in the C programming language before data can be assigned to a variable
which is the crux of a Strongly Typed programming language. The compiler is given notice that it must
make available the requisite memory for the TYPE of data being stored along with the amount of data that
TYPE will be expected to consume in its lifecycle.

To do this properly in the C programming language, one will first declare the TYPE of data the variable will
hold and then the name of the variable. There are many different types and caveats to typing in the C
programming language, but for now, we are only focusing on the integer type and the declaration of
variables in this manner. The immediate, next and future exercises will open you up to the rest of these
types of data which can be used. The important thing to note is that variables must be declared before
they can have a value assigned and that requires a type and a name for the variable, as follows:

```
  int fahr, celsius;    /* two variables are defined with the comma-delimeter of type int for integer */
  int lower, uppper, step;
```

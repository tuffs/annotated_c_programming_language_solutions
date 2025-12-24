# Variable Names (Identifiers) in C

---

C Variable Names

All C *variables* must be *identified* with *unique names*.
These unique names are called *identifiers*.
Identifiers can be short names like x and y or more descriptive names
(age, sum, totalVolume).

*Note*: It is recommended to use descriptive names in order to create
understandable and maintainable code. Think going back to code you wrote
six months ago, you want to be able to understand it.

```c

// Good variable name
int minutesPerHour = 60;

// OK, but not so easily understood
int m = 60;

```

Take out the guesswork and name variables appropriately to describe
their reason for being in the code.

The *general rules* for naming variables are:
- Names can contain letters, digits, and underscores
- Names must begin with a letter or an underscore
- Names are case-sensitive (`myVar` and `myvar` are different
variables).
- Names cannot contain whitespaces or special characters like !, #,
%, etc.
- Reserved words (such as `int`) cannot be used as names
      (identifiers).

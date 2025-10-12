# Exercise 1.3, "The C Programming Language"

---

In 2025, as you start learning C, remember: int holds whole numbers (integers), while float (or better, double)
handles decimals (floating-point). On today's 64-bit machines—like your laptop or cloud server—int is 32-bit
(-2 billion to +2 billion), but use long long for 64-bit giants (-9 quintillion to +9 quintillion) to crunch
massive data without overflow.

Back in the 1970s K&R era, 16-bit systems like PDP-11s squeezed int to -32k to +32k—tiny, due to pricey
memory and slow chips forcing every bit to count, risking crashes on big math. By 1990s 32-bit (Intel 386),
it grew to billions, suiting PCs and web. Now, 64-bit x86-64/ARM64 rules: cheap hardware, IEEE 754 standards
give double ~15 digits and insane ranges (10^{-308} to 10^{308}), powering AI and games. Code once, run
anywhere—focus on logic, not bit fights.

The following list describes the different TYPES which are avaialbe to use in the C programming language:

1. char character- a single byte is required
2. short short integer
3. long long integer
4. double double-precision floating point

The sizes for the objects presented above are machine-dependent. This is meant to say now that when the book
was written, different TYPES consumed different portions of the available memory based on the system using
and subsequently compiling and running them against the processor to deduce calculations and expression statements
with the use of the systems RAM (Random Access Memory) availabile. In addition to the above types, there are
also arrays, structures, and unions OF these basic types, pointers to them, and functions that return them
just as we have done with the main function by declaring it having a return type of int which also gives our
main function an exit code, coincidentally. The totality of our programs result was either a success of failure
for some reason. Binary, pass or fail, true or false, one or zero.

As such, in our `Exercise 1.2 Temperature Conversion` program, we see throughout our code we have
several `assignment statements` inside of it. This sets variables to their respective values as the compiler
traverses the code to turn it into machine- or byte- code that is readable at the processor level. As this is
completed, each individual statement is `terminated` with a semicolon.

```
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
```

As we progress through the available code we notice that each line of code is executed individually as we
move through each line of code with the exception of our `while loop` that is capable of more actions by its
definition which executes the internal block of code inside the braces `{ ... }` of the `while loop` producing
individual lines of output each time this code is executed until the condition presented to the while loop fails.

```
  while (fahr <= upper) {
    ...
  }
```

The steps to executing the `while loop` that we created are exactly as follows: the condition in the parenthesis of the `while loop` are tested, if the expression provided is true (fahr is less than our upper limit, or bound), the body of the loop (the three statements inside of the braces) is executed. The condition is re-tested, and if true the block of code inside the braces is run again until the result of testing the original expression is false. Only then does the computer stop iterating over the code inside of our braces. The condition tests returns false (fahr is larger than our upper limit, or boundary) and the code will continue to progress to the end of the file.

In other words, we want to do something WHILE the condition or conditions we have given the computer to assess evaluate to true. Otherwise, the computer moves along to the next statement OUTSIDE of the braces.

It is important to note that the body of a `while` can be one OR MORE statements enclosed in braces, as in the temperature converter OR a single statement can be provide below `while` without braces, as in:

```
  while(i < j)
    i = 2 *i;
```

We will always indent the code inside of the `while loop` to indicate to readers of the code that these are
statements which are required to be run only inside the `while loop` is executed. You will notice that I choose to
use only two spaces per tab-stop as a formatting change that differs from the original books premise that 4 spaces
are used to indicate this, as time and machinery as well as conventions have evolved, the need to format a tab-stop
in the 4-space format has also been removed. Our compilers are far less strict than they use to be, but the REASON
for indenting the statements to be executed inside the `while loop` remains, it is another formatting decision
which is presented in our code to make it EASY TO READ by other developers. The system itself can be manipulated to
ignore this at compile time or enforce this at compile time, even so much so that the use of a 4-space tab-stop is
required and my code would not execute. But this is an important part of our coding journey, we want to ensure
that we are writing code that can be easily read and understood by our colleagues. We do not want to make our code
difficult to understand by others as the most important part of coding anything is the ability to SHARE our
progress or difficulties with others to extend our features or to troubleshoot our challenges.

As said in the book, _The indentation emphasizes the logical structure of the program._ The book's authors also
recommend only writing one statement per line and including spacing around operators to clarify grouping to the
reader. Think of this, we write beautifully formatted code for HUMAN READABILITY, this means that yes other
SHOULD always be able to read our code in MOST cases (unless you are devious) and that the READER of this code is
often OURSEVLES, you DO NOT want to write code which is unreadable because what happens when you come back to
some code you wrote for a client six-months prior to implement new features, or worse, debug an issue the clients
are having with the code and you cannot understand it! This happens often, each time that we make our professional
code unreadable or understandable logically. They go on to state the the position of braces is even less important
and it is but the gist of all of this is that you SHOULD write READBLE code and above all else, there should
be a reason tied to logic for your formatting of the code that you write.

Importantly, particular jobs, codebases and engineers will make use of different coding style conventions, especially
if you have ever worked in another programming language or professionally in coding you will already know or have
noticed this. So do pay attention to how others style their code and try and blend in when sharing code with others.
In our own personal projects, we can do what we want but professionally, unless you work for yourself, you will
generally be writing code to fulfill the demands of the business or collective you are working with. All said,
pay attention to styling of your code, tie it to logic, and be aware of other collectives code formatting standards.
It is effectively the same as supplying to spaces between a period and beginning of a sentence and indentation of the first line of a new paragraph in English. All a matter of preference but sometimes required for the job.

```
/* All of the following while loops are valid */

while (x < r) {
  ...
}

while (x == y)
{
  ...
}

while (x <= y)
  x++;

```

Back to our code example, most of the heavy lifting in the Fahrenheit temperature conversion program is
done when we assign the resulting value of the formula used to the `celsius` variable.

```
  celsius = 5 * (fahr - 32) / 9;
```

We are multiplying 5 and dividing by 9 instead of using 5/9 is because we are using an integer type to hold
values. You will note that 5 divided by 9 does not come to a whole number, or integer. Therefor, our program
would not work if we simply asked for the computer to assign the result of 5/9 \* (fahr - 32) in almost any
case we will see that the formula valuates to a `double` instead of an `integer`. This because the comptuer
is `truncating` its division to not include the remainder value after it finds the whole number associated
with the result of the formula used when dividing numbers in particular. As such, as 5 and 9 are integers
and when divided, or computed, the resulting integer is 0 point some value. The computer will truncate division
in C for that beginning integer value and as such a corresponding Celsius temperature in the formula would be
returned as zero.

In addition, as we have already discussed, the example displays a bit more about how the printf function works.
printf is a general-purpose output formatting function which is described in more depth inside of Chapter 7 of
the book. It's first argument is a string of characters to be printed to the screen where each % indicates where
one of the other (second, third, ...) arguments provided to the string to be printed are located for substitution as well as the form in which it is to be displayed. For instance, %d specifies an integer argument, so our statement:

```
  printf("%d\t%d\n", fahr, celsius);
```

assigns the values of our two integers `fahr` and `celsius` to their respective %d reference. A tab `\t` is provided
between them through its escape sequence. Finally a new-line is provided to terminate each line of output
and to begin the next. Each of the % construction in the first argument of printf is paired with the corresponding second argument, third argument, etc; each must match up properly by number and type or you will get the wrong answers or values, or your program will not compile!

In addition, it should be stated that `printf` is not a part of the C programming languge itself; there is not an input or output defined in the C programming language itself. printf is just a useful function from the standard IO libary of functions that are normally accessible to C programs. The true way that printf works is actually defined in the ANSI standard, with that said, its properties should be the same when any compiler is used so long as the stdio.h library is available for use and conforms to the ANSI standard. In order to focus on pure C programming the book does not go into much detail concerning Input and Ouput until Chapter 7. Importantly and inversely the `scanf` function is available from the Standard IO Library for reading the input instead of providing output to the console.

As we have discussed, at present, there are a few problems with our temperature conversion program in providing an
accurate temperature on the decimal point precision level. The authors interestingly are upset with the alignment of
the values, meaning that they are not aligned to the right instead of the left which is probably a particular issue
due to the nature of numbers, the way accounting is approached, and general formatting regarding numerical values.
You will note that when you enter a number value into a cell in the Excel or other spreadsheet program, numerical
values are always right-aligned. As such we are introduced to the styling and formatting options we have in the
C programming language.

In our exercise for this lesson we are making some modifications to the existing, previous version of the Fahr-Celsius
conversion table for the range of temperatures, 0...300.

In this example we provide some formatting, a title, and increased precision. The example code without
comments should look like the following code:

```
```
```
#include <stdio.h>

float fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;

int main() {
  while(fahr <= upper) {
    celsius= (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
```
```
```

You will notice one major change in the code I have just provided for the solution, the snippet `fahr += step` is
indicative of the increment assignment procedure where we take the present value of a variable and increment it
by the following variable or value we want to assign to our initial variable at the beginning of the statement
this is known more precisely as the `addition assignment operator`. This shortcuts the need to use the following
code `fahr = fahr + step` and truncates the statement into a simpler format in my professional opinion.

Likewise, this practice can also be done with most operators such as `*`, `/`, and `-` which are known respectively
as the `multiplication assignment operator`, `division assignment operator`, and `subtraction assignment operator`.

In addition, we can also perform addition and subtraction by one whole number with `++` and `--` being
placed either before or after the variable to perform the increment or decrement to. For instance:
`a++` or `b--` - while this can be done on either side of the variable you will mostly see it
performed in this manner.

Continuing on with the lesson we are presented with a list of formatting options for different variable types
in the `printf` statement as substitutional values much like we did with `%d` and `%f` in the past.
This table is provided again as a reference:

    %d        print as decimal integer
    %6d       print as decimal integer, at least 6 characters wide (modernly read as: spacing, or padding)
    %f        print as floating point
    %6f       print as floating point, at least 6 characters wide
    %.2f      print as floating point, 2 characters after the decimal point
    %6.2f     print as floating point, at least 6 wide and 2 after decimal point

With this knowledge, you will have completed the Exercises 1.3 and 1.4 or 1-3, 1-4 in the book. Let's move
along to the next lesson.
```

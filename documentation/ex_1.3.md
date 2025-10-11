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
and to begin the next.

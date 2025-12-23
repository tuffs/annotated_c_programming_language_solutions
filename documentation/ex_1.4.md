# Exercise 1.4, "The C Programming Language" - Rev 001

---

In our newest example, we will discover the use of a `for loop`, where
we are able to truncate the length of our code into a smaller format,
less characters, but accomplish the exact same thing. It is important
that we look at the code we write after we get it working and see if
there is not a better, more performant way to accomplish the same thing.

This is often called `refactoring` our code. We write it first to get
the functionality down and test our work to ensure that it is working,
then we should go back, review our code and make adjustments so that it
is as performant as possible in almost all cases. This is a very
important part of the programmers journey and in this example, we are
shown a new concept, the `for loop` and how it can help to minimize
the code that we are writing.

In this case, the code revision is not really much more performant when
it comes to modern computers; however, it should stand as a
representation or example for how we can review our code and utilize
functions and methods available to decrease the footprint of the code
written as well as the performance. Be on the lookout for ways to better
understand your code so that you can identify when you are writing more
code than is required for the task and adjust your code accordingly.

Here, we are more importantly learning an additional way to solve the
same problem. Follow along in the example code provided below.

```
#include <stdio.h>

int main() {
  int fahr;

  for (fahr=0;fahr<=300;fahr=fahr+20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}
```

You will notice that we have removed most of the variables we originally
used for step, lower, upper, and celsius even and instead are referring
to fahr only and representing the rest of our variables as value or
expressions mathematically.

In addition we see the `for loop` being used here. Our `for loop` has
three parts to it by design, it has an initial value that is assigned to
a variable to be used throughout our calculations, next it contains a
condition to be evaluated each time the statements inside of the braces
is run, and finally it has an expression that modifies our original
variables value in some way, this time, incrementing that value by a set
number, or step.

Then, we use the same format seen before for our print statement, except
one of the representative values is actually an expression for the
computer to compute, in-line, as the print statement is waiting for its
final value needed to be provided to it. This really does make for a
different looking code block, but it performs the exact same
functionality that we arrived at before, with a lot fewer variables and
far less lines of code and character use. This is the more performant
and concious way to solve temperature conversions, however, neither
way approach is wrong.

# _New Content for Ex 1.4_

---

However, the idea that the variables here have been removed is not such a
great idea. If we go back to making our code readable, and understable for
others to work on, this makes sense.

The book refers to the absence of these variables as magic numbers, and
while WE know what they represent, someone looking on DOES NOT know what
they are looking at until after the decipher what is happening.

We do not want to leave that up for interpretation, and instead, the authors
present the idea of Symbolic Constants which can be defined atop the file,
below our `#include <stdio.h>` call and before our first variable assigment
statement `int fahr`.

With no further explanation, we are going to quickly go over the inclusion
of Symbolic Constants with the solved, and yes, presented Example 1.4 from
the book, "The C Programming Language". Please note that our Symbolic
Constants are provided as 100% CAPITALIZED characters.

```
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int fahr;

int main() {
  fahr = LOWER;

  printf("\n");
  printf("Fahrenheit-Celsius Conversion Table\n");
  printf("-----------------------------------\n");
  printf("\n");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%3d | %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}
```

You will of course notice that I take a few liberties in my own composition
of the exercises throughout this book and I have given a best effort to make
changes where appropriate, better, more performant code is provided, and
where I have tested that the resulting code provided is in complete working
and compilable order. I will go back and test all of my code in the Windows
and MacOS Operating Systems, but, given the robustness of the GCC compiler
"it SHOULD theorhetically just work"(TM) ;).

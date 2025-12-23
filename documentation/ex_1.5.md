# Exercise 1.5 - "The C Programming Language" - Rev 001

---

We are going to be discussing _Character Input and Output_ in this portion of the book and
series of annotations. We are presented with a simple premise, which is VERY true, that
"The modal of input and output supported by the standard library is very simple. Text input
or output, regardless of where it originates or where it goes to, is dealt with as _streams_
of characters." Nowadays, you can think of this as streams of data, but we will stick with
characters, nonetheless, due to the simplicity of their definition and the processs we are
examining.

"A _text stream_ is a sequence of characters divided into lines; each line consists of zero
or more characters followed by a _newline_ character. It is the responsibility of the library
to make each input or output stream conform to THIS model; the C programmer using the library
need not worry about how lines are represented outside the program." (The library is not agnostic
to how the lines are represented, but it IS responsible for how the stream is interpreted PROPERLY).

Reading on, "The standard library provides several functions for reading and writing one character
at a time, of which getchar() and putchar() are the simplest. Each time it is called, getchar() reads
the _next input character_ from a text stream and returns that as its value. That is, after:

```
  c = getchar()
```

the variable `c` contains the next character of input. The characters normally come from keyboard [stroke];
input from files is discussed in Chapter 7.

The function putchar() prints a character each time it is called:

```
  putchar(c)
```

prints the contents of the integer variable `c` as a character, usually on the screen. Calls to putchar() and
printf() may be interleaved; the output will appear in the order in which calls are made.

# Chapter 1.5.1 - File Copying

The authors of the book go ahead and delve into the concept of file copying at this point which is a natural
chain of events in my opinion. Let's understand what they have to say on the topic here:

It is stated that with only the getchar() and putchar() functionality a surprising amount of functionality is
added to the C programmers repertoire. Then, a bit of psuedo-code is presented to the reader as follows:

```
  read a character
  while (character is not an EOF indicator) /* End-of-File */
  {
    output the character just read
    read the next character
  }
```

Now, the authors convert their presented psuedo-code into real C code.

```
#include <stdio.h>

/* copy input to output; v1 */
int main() {
  int c;

  c = getchar();
  while(c != EOF) {
    putchar(c);
    c = getchar();
  }

  return 0;
}
```

An embarrassingly simple program, we define c to the getchar() function originally and then
we check for the value of c (not being an End-of-File character/call), call putchar(c) with the
provided c variable and then continue with a c = getchar() call again before re-running the loop
to update our c variables value.

The authors go on to explain an operator call (relational operator) `!=` which means not equal
and the exclaimation point character in programming is called a `bang` operator and specifically
means NOT (or opposite of) in the context of programming. For now, we will go with the NOT EQUAL TO
definition for simpllicity.

Now when you view the code you see the `int c` variable definition which at first may seem very
odd as we are expecting a character to be read, however, the computer reads characters in the
case of the C programming language, and others, as numerical and other values than purely a
character. So this IS what we want to do, despite the initial logical questions you may have
regarding its use. From the book itself, you will read: "What appears to be a character on the
keyboard or screen is of course, like everything else, stored internally just as a bit pattern."

So, let's fire up our command line and compiler and run this simple application! You will notice
upon compiling and running the resulting executable, or, preferred term, binary file. That we
are immediately presented with a input prompt below our command line entry to run ~/a.out or
whatever you have named your output with `gcc ex_1.5.1.c -o myProgramName.out` - It is waiting
for the initial character to be entered, once you enter a character the program moves to the
while statement where it is adding the character to the putchar() function, essentially loading
it up with data, or character representations... it then continues this process by looping over
the while loop until the condition is met, variable c does not equal EOF. Or, the EOF command
has occurred, you can do this with the return or enter key (whichever your preferred naming
convention for that key is).

Once you type something out, say your name, as I have done; you will have that repeated in your
console such as:

```
  Devon Kiss
  Devon Kiss
```

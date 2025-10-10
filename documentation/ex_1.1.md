# Exercise 1.1, "The C Programming Language"

---

We will start our journey together like all, one step at a time. It is my sincere hope that you are able to complete and enjoy the following curriculum. In the beginning, the concepts used in programming were difficult for me, that inspiration to learn what I did not completely understand is what drives me to create this accompanyment of documentation.

I will warn you that the only inspiration and guidance provided throughout this set of examples and exercises will be from Dr. "Chuck" Severance at https://cc4e.com - I believe that the heart of his message in video format resonated wildly within me and his instruction and work will also be an influence on my work here.

# Exercise 1.1 - The Hello, World Program

---

In our first exercise we do some important work in writing our application. The first code example we see is an
interesting one, you see it in the psuedo-code provided below. Here we are letting the compiler know that we want
to reference code outside of our application for use inside of our application. In particular, we are looking to
use a library called stdio.h -- which is, the Standard IO Library. The Standard IO Library provides some great
functionality to us so that we can work with input and output to and from the terminal and command line.

```
  #include <stdio.h>
```

In the C programming language, and almost every other programming language, we use libraries, packages, or other
termed code that has already been written in order to leverage particular behaviors that we want to take advantage
of when out program is compiled and then executed. By definition, the Standard I/O Library handles input and output
commands so that we can focus on writing applications that either intake our output data.

This is a fantastic place to start because we don't want to have to write our own libraries for these types of functionality just yet. If we want to do so later, that is fine and is recommended, for other actions, I/O is generally already covered with this library unless you are working with a different type of input and output than
we are already working with.

So, we bring in this library so that we can make calls to different utility methods provided in this library. You are able to view all of the functionality provided by the Standard I/O Library for the C programming language by visiting the reference manual for the library here: https://cplusplus.com/reference/cstdio/ (it is being called cstdio (stdio.h) due to the reference being C++), however, I wanted to pick a website with a reference to this package which could be depended on staying up for decades to come so that this reference guide does not have to have very many updates.

Now that we have that covered, lets get back to the library, it provides access to what are known as `streams` in the C programming language. These streams allow us to operate physical devices such as keyboards and monitors (screens) in order to provide input or output to or from the applications that we write using the C programming language. These streams are handled in the stdio.h library as pointers to FILE objects. These pointers to FILE objects are able to recognize a stream of data, and are used as a parameter in the operations involving the same stream of data. Think data as rice in a bucket that is poured into a bowl, however, the data that is poured out comes in a specific order such as the keystrokes on a keyboard or other input device. That stream is then interpreted by the stdio.h library. Just the same we could arrange some rice in a bucket and pour it out in a specific order for our users to read something on their screen after we have performed operations on the data which has been streamed in from input (standard in) as output as well. The library acts as interpretation device between our code, the computer and input and output devices such as screens and keyboards.

There are three standard streams when it comes to IO in the C programming language:

- 1. stdin - standard in
- 2. stdout - standard out
- 3. stderr - standard error

These are all automatically created for use when the stdio.h library is `included` by programmers writing code in the C programming language.

## Stream Properties

---

Input and Output streams have properties to them to defining functions which can be used on them instructing and controlling how they will treat data inputs or outputs. Most of these properties are defined as soon as the stream is associated with a file (opened) which implements the provided `fopen function.` Below are the four properties with which the Standard IO Library handles:

    1. Read / Write Access
    ---
    Read or Write Access specifies whether the stream has read or write access on the physical media (hard disk, solid state drive, USB drive, etc.) that they belong to. Both are possible, but often only the read property is allowed due to storage security measures based on permission structures.

    2. Text / Binary Data
    ---
    Text streams can be thought of as text lines, each of these lines of text end with a newline character (recall: \n?). Depending on the environment that our application is run in some characters may be translated to other characters based on parameters unique to the particular environment we are using. This allows text in files to be represented as one thing, but read or output as another based on the environment's settings.

    3. Buffers
    ---
    A buffer is a block of memory where data is built-up or accumulated prior to being physically read or written to the associated file, service, or device. Streams can be buffered in the following patterns: fully buffered, line buffered, or unbuffered. When a block of data is full buffered as a stream, that data is read from or written to when the buffer is full or complete (this is generally done with files from or to physical mediums), on line buffered streams of data the new-line character provides an interruption for the data stream to be processed, just like pressing return (Enter) on your keyboard after typing a command to the `command line`, and finally we have unbuffered streams of data which are meant to be read or written as soon as the computer is capable of doing so, think of this as real-time or live data streams (even though we all know that video content is not truly consumed as a live feed anymore, it is buffered in one way or another, the concept remains).

    4. Orientation
    ---
    When opened, streams of data do not have any orientation. When an input or output operation is executed on the data stream, they become byte- or wide-oriented, depending on which operation is performed; but generally, functions performed using the stdio.h library are byte-oriented while functions in the cwchar.h are wide-oriented. See this link for more information: https://cplusplus.com/cwchar.

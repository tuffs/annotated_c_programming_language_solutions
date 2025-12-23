# Getting Started with C

## Install C

If you want to run C on your own computer, you need two things:
- A text editor, like Notepad, to write C code
= A compiler, like GCC, to translate the C code into a language that the
computer will understand

There are many text editors and compilers to choose from. In the next
steps, we will show you how to use an IDE that includes both.

## Install IDE

An IDE (Integrated Development Environment) is used to edit AND compile
the code.

Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These
are all free, and they can be used to both edit and debug C code.

Note: Web-based IDE's can work as well, but functionality is limited.

We will use *Code::Blocks* in our tutorial, which we believe is a good
place to start.

You can find the latest version of Codeblocks at
https://www.codeblocks.org/. Download the mingw-setup.exe file, which
will install the text editor with a compiler.

## C Quickstart

Let's create our first C file.
Open your editor and create a file called 'myfirstprogram.c' and save.

```c

#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}

```

Don't worry if you don't understand the code above - we will discuss it
in detail in later chapters. For now, focus on how to run the code.

Then run:
`$ gcc myfirstprogram.c -o myfirstprogram`
`$ ./myfirstprogram`

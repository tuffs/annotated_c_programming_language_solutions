// Exercise Solution 1.1 - Rev 001
// from "The C Programming Language"

// All exercises in this folder are directly inspired by
// the "The C Programming Language Book" by Brian W. Kernighan and Dennis M. Ritchie
// All of my examples are from the YouTube instructor "Dr. Chuck" at cc4e.com

// These examples attempt to capture the heart and understanding of
// the original book through the viewers lens and will demonstrate how
// it is possible to learn the C programming language in 2025 for free
// and very thoroughly.

// While there have been several changes to the C programming language, this
// is my personal attempt to recapture a peice of programmign history by
// learning what was originally invisioned for the C programming language as
// this book was commissioned by Bell Labs (AT&T) in the 1970s.

// What better way might there be to learn programming than through this lens?

// Each Example exercise completed will take into account the last comleted,
// the breadth of information learned, and will attempt to expound upon the
// previously taught and current lessons.

// I will be providing documentation for each exercise file that is in this
// repository in the ~/documentation/ex_*.md file that corresponds with
// the exercise file written in The C Programming Language for additional and
// hopefully remarkable resource for free.

// Knowledge is power and the internet brings freedom, if you can keep them
// these are two of the most powerful commodities available under the sun
// aside from time. That being said, I hope that you enjoy these examples
// and learn more each day!

// In any application you write, you will generally be utilizing a library
// of some sort, in this case we will be using the "Standard IO" library.
// In the C programming language, we `#include` `<insert_library.extension>`.

// Along with this, when we create functions for our programs, these will be
// called for us when we include a main() function in our application as
// follows. In the C programming language, we need to tell the compiler what
// type to expect to be returned from each function call. This is done
// in the main() function with the int type, known as Integer.

// The compiler, expects that the function called main will return an integer
// as its output, every time that it is called.

#include <stdio.h>

int main() {
  printf("Hello from C!\n");
  return 0;
}

// Expected, proper command line output:
// Hello from C!

// * Technically, in the C programming language, we do not have to declare
// the type returned from a function explicitly. The compiler does not care
// however, as it is the year 2025 at the time of my writing this, it IS
// standard practice to have an exit code when an application is run, so
// instead, we are taking the time to type our main function and return a
// value when the expectated output is provided.

// You will note this difference between Ex 1.1 here and in the book. I am
// simply providing context that is, in my opinion, needed here. So in the
// following solutions, you will watch as I do this and you should too for
// the reasons provided. The best thing that we can do is provide readable,
// acceptable conditions which can be expected of our code in MOST situations.

// * How Do You Run Programs You Build?
// This is a great question, to do so in the C programming language, you will
// need to have a C compiler installed, generally speaking you have MANY options
// here and will almost assuredly be readily available to compile your application
// if you are running Windows, MacOS or Linux as these systems generally come
// with a compiler, and if they do not have one installed already, you are usually
// just a few clicks (or keystrokes) away from having your compiler ready.

// With that said, you can visit the following links based on your operating system
// to find a C compiler built for your Operating System. I will ALWAYS recommend the
// use of GCC and Linux as they are completely free, open source projects and
// we are never at a loss of the need for these types of projects, communities,
// and their resulting products like the applications you are learning to build!

// GCC: classic open source C compiler for Linux and many other operating systems
// including Windows under Cygwin or Ming. This project has been around forever
// well, not as long as the C programming language, but respectively speaking,
// it has been around the internet forever!
// Link: https://gcc.gnu.org/

// Xcode: xcode offers the tools you need to develop, test, and distribute apps
// on Apple platforms, including predictive code completion, generative intelligence
// powered by the best coding models, advanced profiling and debugging tools, and
// simulators for Apple devices.
// Link: https://developer.apple.com/xcode/ 

// Microsoft Windows SDK: The Windows SDK (10.0.26100+) for Windows 11 provides the
// latest headers, libraries, metadata, and tools for building Windows applications.
// Use this SDK to build Universal Windows Platform (UWP) and Win32 applications for
// Windows 11, ver. 25H2+ and previous Windows releases.
// Link: https://developer.microsoft.com/en-us/windows/downloads/windows-sdk/ 

// * No hand holding for downloads, I have specifically chosen these three downloads
// for you to *EXPLORE* for your operating system. I have not flat out given instructions
// here for a specific reason. You need to learn how to READ THE *F'N* MANUAL! (RTFM) for
// the uninitiated. As you go through life and your coding adventures, you will quickly
// realize that no one will do it for you and you will better informed when you do it for
// yourself. When it comes to compiling your code, it is important to understand what
// you are doing and how each compiler works. Compilers are a dime a dozen and available
// in nearly any flavor you would like. However, you can be guaranteed support with the
// compilers which I have chosen.

// With that said, I will display my flavor compiler's usage and how to compile
// your code within the GCC compiling application here as an omage to Linux and Open
// Source solutions. This is a blatant preference choice which I hope is not lost on
// those who have come to enjoy the learning experience!

// If you are using Windows at present, I cannot recommend enough that you setup
// WSL and begin using that route for your programming environment. You will be
// very glad that you have if this is your first experience in the programming
// and development world.

// ~ sudo apt update
// ~ sudo apt install build-essential
// ~ gcc ./your_filename.c -o ./your_outputname.out
// ~ ./your_ourputname.out # runs your application
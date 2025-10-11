// Exercise Solution 1.2 - Rev 001
// from "The C Programming Language"

// When working with a set of characters in C, you are actually working with a character
// array. This means that each character that lay inside the quotation characters are 
// individual items inside of an array of these same type of characters, which are then
// arranged just as they are input into the program's structure.

// For instance, take the string provided from the Exercise 1.1,
// "hello, world" this can be thought of as an array of characters which
// are strung together as in the following example:
// char my_statement[13] = ['h', 'e', 'l', 'l', 'o', ' ', ',', 'w', 'o', 'r', 'l', 'd'];

// The C programming language allows for this string of characters which
// are stored in memory as an array to be REPRESENTED as a string (read again
// as: Character Array).

// Now, what is the implication of this? The implication is that you can target,
// identify, guess, or infer which character goes where in the grand scheme of things
// if you understand what something actually is when you break it down into simpler
// terms. Meaning, you can scramble (obfuscate), calculate, and map-over the individual
// characters inside of a string with this knowledge.

// In the previous example, 1.1, "The C Programming Language" book has you provide a
// string of characters to be printed in the `hello, world` example.

// In order to do this your computer had to designate the memory required to save
// each character when the compiler traversed the code that you wrote. Yes, this means that
// the amount of memory that the program has available to it, actually matters!

// This also means that in order for our computer to be able to make assignments to
// variables, the computer needs to know some number of information, the TYPE of data to be
// stored in memory, the NUMBER of bytes which should be reserved in memory, and WHAT to
// refer or point to as a reference for what that is called to facilitate the storage
// of your variables, in memory. An extremely important concept which is not covered
// in more modern thoughts and teaching of programming languages, especially those which
// are NOT strongly type languages.

// I understand that this may be an odd concept for those who were born any time after
// "The C Programming Language" book was written, due to the fact that we now largely take
// memory management granted and do not realize (or it is obfuscated from our
// immediate knowledge). In order to perform a set of operations on any data, prior
// to the calculations you have written are to be computed, the computer must already
// know or approximate the amount of memory that will be required to perform an operation
// in order to store the result of these computations in-memory, and subsequently to the
// hard disk.

// We generally allocate BYTES in MEMORY of a specific TYPE of data for this procedure.

// I am covering this very specific component of programming knowledge so that it is not
// lost on the developers of tomorrow. It may seem implicitly understood and might be to you
// and to many developers. However, the further we get away from this fact, the larger
// problems we MIGHT create for ourselves in the future! The amount of memory that one truly needs
// to achieve something on the computer with a program SHOULD be finite and calculated
// unless you know that you are working with some VERY large unknown, and even then, you should
// have a general idea of what to expect based on the information that you are working with,
// based on the math required to facilitate such calculations.

// This kind of knowledge is primarily lost and exempted from the frameworkers and script
// kiddies that hackon website code and perform crude data manipulation inside of loosely
// typed languages of the current millenia. Which is not to say that there is something
// wrong with being able to work in a framework or modifify a user-script to keep things
// working as you would like inside of a website, no, that is all very important too.

// The point I am trying to make is that if you are careful with how you write your code,
// what you need to make your code performant, and you understand that limitations are
// a real consideration, you can do FAR more than your colleagues who make no bones about
// not knowing that it is important to take such matters into consideration.

// Many will tell you that memory allocation, data structures, and algorithms are the REAL
// difference that lies between a JavaScript developer with a few years of experience and
// someone with a Bachelor of Science in Computer Science. While this is true, the information
// and knowledge that it takes to know this does not require a degree, it requires the
// proper amount of practice and domain knowledge of your craft. I instead, argue, that you
// can and should teach yourself these nuances so that the concerns which people have at
// present surrounding computer programming can be put to rest by those who are more
// capable with less expenditure getting there.

// The careful observer will note that both tales have a very similar meaning in the end, no? ;)
// You can generally do much more, with much less, if you know how something works from beginning
// to end... Your job as a computer programmer is to work smarter, not harder, your interest lies
// in making a machine which reads 0s and 1s do the heavy lifting for you.

// Back to brass tacks though, we will now discuss the precise and official definition for the
// string that we created in the last exercise. According to "The C Programming Language" we
// are told that the sequence of characters in double quotes, like "hello, world\n", is called
// a `character string` or `string constant` in the C programming language. For the sake of
// the argument, we will proceed with these definitions, however, I feel it was important to
// note the proceeding information here for you.

// The only character arrangement with which you may not find yourself familiar here is the
// `\n` notation. As described, this is a newline character. When working with computers
// engineers needed a way to indicate to the terminal they were working on, or to other terminals
// on portable applications, where to stop outputting characters on the screen and to begin
// on the next line of the screen. Early computers, generally only had so much screen real-estate
// so each line of characters provided in any output was extremely important, as was the ability
// to control this.

// You may be familiar with smaller devices that have become known as wearables that you could
// imagine would be a logistical task in itself to ensure that data is able to be seen on the
// screen as neccessary or it might be cut off or not seen by the end user. The same concept
// applies here. In the C programming language, at the end of a set of output we will want to
// create a newline with the `\n` notation. This is why that was included in the example
// provided.

// The `printf` argument, printf allows us to provide output to the screen in the form of
// text-based characters. With rare exceptions, early computers did not produce graphics
// or have desktop environments that we are now so use to. Instead, everything was done by printing
// characters to the screen. Images were also crudely made in this same format, this is
// known as ASCII art by many. The following example should be relevent to this discussion:

//                                   ....
//                                 .'' .'''
// .                             .'   :    * NONE SHALL PASS *
// \\                          .:    :
//  \\                        _:    :       ..----.._
//   \\                    .:::.....:::.. .'         ''.
//    \\                 .'  #-. .-######'     #        '.
//     \\                 '.##'/ ' ################       :
//      \\                  #####################         :
//       \\               ..##.-.#### .''''###'.._        :
//        \\             :--:########:            '.    .' :
//         \\..__...--.. :--:#######.'   '.         '.     :
//         :     :  : : '':'-:'':'::        .         '.  .'
//         '---'''..: :    ':    '..'''.      '.        :'
//            \\  :: : :     '      ''''''.     '.      .:
//             \\ ::  : :     '            '.      '      :
//              \\::   : :           ....' ..:       '     '.
//               \\::  : :    .....####\\ .~~.:.             :
//                \\':.:.:.:'#########.===. ~ |.'-.   . '''.. :
//                 \\    .'  ########## \ \ _.' '. '-.       '''.
//                 :\\  :     ########   \ \      '.  '-.        :
//                :  \\'    '   #### :    \ \      :.    '-.      :
//               :  .'\\   :'  :     :     \ \       :      '-.    :
//              : .'  .\\  '  :      :     :\ \       :        '.   :
//              ::   :  \\'  :.      :     : \ \      :          '. :
//              ::. :    \\  : :      :    ;  \ \     :           '.:
//               : ':    '\\ :  :     :     :  \:\     :        ..'
//                  :    ' \\ :        :     ;  \|      :   .'''
//                  '.   '  \\:                         :.''
//                   .:..... \\:       :            ..''
//                  '._____|'.\\......'''''''.:..'''
//                             \\

// We may be getting a bit off task here, but again, I believe that all of this information
// is very relevant to the understanding of the C programming language and the time and place
// where it was created. You would also be VERY lucky if you could display the entire
// Gandolf ASCII art presented back when the book we are discovering was originally published!

// So, due to this `\n` newline character as the book states, if you are to provide a `printf`
// statement to the compiler without the `/n` character, your compiler MAY gripe at you. However,
// it is important to note that todays versions of compilers do not require this any longer
// just as our screens are far larger and more capable, the compiler is not as strict as it once
// was. It once was strict such as to prevent you from doing something that would possibly prevent
// the computer from displaying important information properly.

// Try this for yourself. Uncomment the following lines of code and pass this through your compiler
// it probably will not provide an error, but instead if you are working with an older compiler,
// you might still get a small warning regarding no use of the `\n` character to your printed
// buffer window.

// Exercise 1-1 - No \n newline character

// #include <stdio.h>
// int main() {
//   printf("gaaaandoooolf!");
//   return 0;
// }

// Exercise 1-2 - The `\c` character
// #include <stdio.h>
// int main() {
//   printf("what is \c?\n");
//   return 0;
// }
// The complete list of `escape sequences` is provided for 
// your information in Section 2.3 just as the book describes.

// Above in Exercise 1-2, replace the letter `c` above and experiment for yourself!

// 1.2 - Variables and Arithmetic Expressions
// Formula: C - (5/9)(F-32) to print a table of degree conversions (Celsius to Fahrenheit)

// As described, in the following example you are introduced to several new ideas from
// this point: comments, declarations, variables, arithmetic expressions, loops, and
// formatted data.

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300  */

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* amount to increment, or, step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius); /* important reference for below */
    fahr = fahr + step;
  }
}

// In the Exercise program, we see a few new ideas, but everything SHOULD be straightforward,
// we are designating a range of numbers to work with, a modifier (step/incremental difference)
// and then we are telling the computer to perform an action while a condition is evaluated as
// a true statement. Once the statement is no longer true, we are able to complete the loop.
// Finally, we have a formula which provides us with the Celsius equivalent to the Fahrenheit
// temperature and we print the results in a formatted manner to `standard out`.

// Our important reference for below line of code is our printed output and I wanted to
// talk specifically about it and how it is working in this case. As we read from left to right,
// we are printing to standard out with `printf` in the application, then we are given a weird
// string of characters %d\t%d\n -- which are individually %d \t and \n, but %d is repeated.
// After the string in quotes is provided, we then are tacking on our variables.

// The %d lets our compiler know that we have a placeholder for something, and the order matters,
// that something comes along twice in our print statement as we see two %d's and then we are
// letting the compiler know which variables, again, in order, we are using to represent the
// reference inside of the `printf` statement. So here, as they are displayed in proper order,
// we are printing our fahr (Fahrenheit) and celsius (Celsius) variables at their present value
// in the midst of our `while-loop`. Finally, our `\t` escape sequence character tells the
// compiler to insert a tab-stop (read: tab) in-between our two temperature equivalents.

// At the end, we are incrementing our temperature, inside of the range we want by the step or
// incremental difference provided at the beginning of the application where we assign a 20
// degree difference between each temperature equivalency from 0 to 300 degrees. We have also
// introduced the second, or third, type of comments which are allowed in the C programming
// language.

/*
 *
 * As you can see, this is a block of comments indicated with the beginning line
 * with a slash-asterisk combination and finally an asterisk-slash combination to
 * complete the block of comments, only, in this case the comment occupies the trail
 * end of a line of code, which is completely legal to do, the compiler simply ignores
 * the comment and presses on.
 * 
 * */

// As you can now see, we have the double-slash, slash-asterisk (single-line), and slash-
// asterisk (multi-line\block) comment style. All are completely legal in the C programming
// language. Please note that it is common-place to provide an additional asterisk when
// defining block-style comments that span several lines of text for longer comments,
// or, to simply begin the line of code with double-slash comment notation as I have
// chosen for the entirety of my solutions and annotations here.
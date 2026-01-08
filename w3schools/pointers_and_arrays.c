#include <stdio.h>

// Pointers and Arrays in C

/*
 * You can also use pointers to access arrays. Consider
 * the following array of integers.
 */

// int main() {
//   int myNumbers[4] = {25,50,75,100};
//   printf("%d\n", myNumbers[0]);

//   return 0;
// }

/*
 * You learned from the arrays chapter that you can loop
 * through the array eleemnts with a `for` loop
 */

// int main() {
//   int myNumbers[4] = {25,50,75,100};
//   int i;

//   for (i = 0; i < 4; i++) {
//     printf("%3d\n", myNumbers[i]); // formatting in format spec
//   }

//   return 0;
// }

/*
 * Note, I have added a 3 prior to the decimal format specifier
 * this adds an additional layer to our formatting and tells that
 * we want the output of %d to be 3 units in width, thus, aligning
 * the digits in a row, accounting style, right-hand aligned, in
 * this case.
 * 
 * Instead of printing the value of each array element, let's print
 * the memory address of each array element
 */

// int main() {
//   int myNumbers[4] = {25,50,75,100};
//   int i;

//   for (i = 0; i < 4; i++) {
//     printf("%p\n", &myNumbers[i]);
//   }

//   printf("\n");

//   return 0;
// }

/*
 * So from the "memory address example" above, you can see
 * that the compiler reserves `4 bytes` of memory for each
 * array element, which means that the entire array takes
 * up `16 bytes (4 * 4)` of memory storage and addressing
 * */


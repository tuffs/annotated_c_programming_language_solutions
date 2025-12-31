#include <stdio.h>

// You learned from a previous chapter, that we
// can get the memory address of a variable
// with the reference operator `&`

// int main() {

//   int myAge = 43; // an int variable
//   printf("Actual Value: %d\n", myAge); // prints value: myAge
//   printf("Memory Address: %p\n", &myAge); // prints memory address: &myAge

//   return 0;
// }

// A pointer is a variable that stores the memory address
// of another variable as its value. A pointer variable points
// to a data type (like `int`) of the same type, and is created
// with the `*` operator.

// The address of the variable you are working with is assigned
// to the pointer.

// int main() {

//   int myAge = 43; // an int var
//   int* ptr = &myAge; // pointer var, with name ptr

//   // output the value of myAge (43)
//   printf("%d\n", myAge); // 43
//   printf("%p\n", &myAge); // memory address held for myAge
//   printf("%p\n", ptr); // output the mem addr of myAge w/ the pointer

//   return 0;
// }

// int main() {
//   int myAge = 32;
//   int* ptr = &myAge;

//   printf("%p", &myAge);

//   return 0;
// }

/*
 * Create a pointer variable with the name `ptr`, that points
 * to an `int` variable (`myAge`). Note that the type of the
 * pointer has to match the type of the variable you're working
 * with (`int` in our example).
 *
 * Now `ptr` holds the value of `myAge`'s memory addresss.
 *  
 */

/*
 * Dereference
 *
 * In this example above, we used the pointer variable to get the
 * memory address of a variable (used together with the `&` reference
 * operator).
 * 
 * You can also get the value of the variable the pointer points to, by
 * using the `*` operator (the dereference operator).
 */

int main() {
  int myAge = 43; // var dec
  int* ptr = &myAge; // pointer dec

  // Reference: Output the memory address of myAge with the pointer
  printf("Memory Address: %p\n", ptr);

  // Dereference: Output the value of the myAge with the pointer
  printf("Data in Memory: %d\n", *ptr);

  return 0;
}

/*
 * Notes on Pointers
 *
 * Pointers are one of the things that make C stand out from other
 * programming languages, like Python or Java.
 * 
 * They are important in C, because they allow us to manipulate the data
 * in the computer's memory. This can reduce the code and improve the
 * performance. If you are familiar with data structures like lists, trees,
 * and graphs, you should know that pointers are especially useful for
 * implementing those. And sometimes you even have to use pointers, for
 * example when working with files and memory management.
 * 
 * But be careful; pointers must be handled with care, since it is
 * possible to damage data stored in other memory addresses.
 * 
 */
#include <stdio.h>

int main() {
  int myAge = 40;
  int* pointer = &myAge;

  printf("%d\n", myAge);
  printf("%p\n", pointer);
  printf("%d\n", *pointer);

  return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
//  char myString[] = "myString";
//  int strLength = strlen(myString);
//
//  if (strLength <= 5) {
//    printf("%s\n", myString);
//  } else {
//    printf("Your string is too large!\n");
//  }

  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%zu\n", strlen(alphabet)); // 26
  printf("%zu\n", sizeof(alphabet)); // 27 -> \0??

  return 0;
}

#include <string.h>
#include <stdio.h>

int main() {
    char str1[11] = "Hello ";
    char str2[] = "World!";
    int strLens = strlen(str1) + strlen(str2);

    if (strLens >= (sizeof(str1) - 1)) {
      // Concatenate str2 to str1 (result is stored in str1)
      strcat(str1, str2);
      // Print
      printf("%s\n", str1);
    };

    return 0;
}

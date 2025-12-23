#include <stdio.h>
#define CONV 20 /* Celsius temp to convert*/

int main() {
  int celsius;
  for (celsius = CONV; celsius <= CONV; celsius++) {
    printf("Celsius: %3d | Fahrenheit: %6.1f\n", celsius, (celsius * 9.0/5.0) + 32);
  }
  return 0;
}
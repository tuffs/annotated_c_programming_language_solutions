#include <stdio.h>

int main() {
  double myValues[] = {1.1, 1.2, 1.3, 1.4};
  int length = sizeof(myValues) / sizeof(myValues[0]);

  printf("myValues[] has %d\n elements", length);
 
  return 0;
}

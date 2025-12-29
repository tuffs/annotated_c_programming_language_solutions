#include <stdio.h>

void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of x + y is: %d\n", sum);
}

int main() {
  calculateSum(4,3); // 7 
  return 0;
}

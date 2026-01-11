#include <stdio.h>

void bS(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[j] > arr[j+1]) {
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

int main() {
  int myArr[] = {125,100,75,50,25,0,-25,-50,-75,-100,-125};
  int arrLen = sizeof(myArr)/sizeof(myArr[0]);

  bS(myArr, arrLen);

  printf("[");

  for (int i = 0; i < arrLen; i++) {
    printf("%d", myArr[i]);
    if (i < arrLen - 1) {
      printf(", ");
    } else {
      printf("]\n");
    } 
  }

  return 0;
}

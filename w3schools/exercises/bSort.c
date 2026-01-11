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
  int myArr[] = {100,75,50,25,0,-25,-50,-75,-100};
  int aL = sizeof(myArr)/sizeof(myArr[0]);

  bS(myArr,aL);
  
  printf("[");

  for (int i = 0; i < aL; i++) {
    printf("%d", myArr[i]);
    if (i < aL - 1) {
      printf(", ");
    } else {
      printf("]\n");
    }
  }

  return 0;
}

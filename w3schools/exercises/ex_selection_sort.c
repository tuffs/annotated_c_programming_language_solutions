#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIdx = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx]) minIdx = j;
    }

    if (minIdx != i) {
      int tmp = arr[i];
      arr[i] = arr[minIdx];
      arr[minIdx] = tmp;
    }
  }
}

int main() {
  int myArr[] = {100,75,50,25,5,0,-25,-50,-75,-100};
  int arrLength = sizeof(myArr)/sizeof(myArr[0]);

  selectionSort(myArr, arrLength);

  for (int i = 0; i < arrLength; i++) {
    if (i == 0) {
      printf("[");
    }

    printf("%d", myArr[i]);

    if (i == arrLength - 1) {
      printf("]\n");
    } else {
      printf(", ");
    }
  }

  return 0;
}

#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }

      if (minIndex != i) {
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
      }
    }
  }
}

int main() {
  int myArr[] = {500,250,100,0,-100,-250,-500}; 
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
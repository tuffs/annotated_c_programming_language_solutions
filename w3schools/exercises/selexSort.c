#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
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
  int myArr[] = {200,100,0,-100,-200,-300};
  int arrLength = sizeof(myArr)/sizeof(myArr[0]);

  selectionSort(myArr, arrLength);

  for (int x = 0; x < arrLength; x++) {
    if (x == 0) {
      printf("[");
    }

    printf("%d", myArr[x]);

    if (x < arrLength - 1) {
      printf(", ");
    } else {
      printf("]\n");
    }
  }

  return 0;
}
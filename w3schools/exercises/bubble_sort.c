#include <stdio.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {100,75,50,25,0,-25,-50,-75,-100};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  bubbleSort(arr, arrSize);

  printf("[");

  for (int i = 0; i < arrSize; i++) {
    printf("%d", arr[i]);
    if (i < arrSize - 1) {
      printf(", ");
    }
  }

  printf("]\n");

  return 0;
}

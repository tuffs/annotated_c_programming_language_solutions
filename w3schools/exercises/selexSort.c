#include <stdio.h>

void selection_sort(int arr[], size_t n) {
  if (n < 2) return;

  for (size_t i = 0; i < n - 1; i++) {
    size_t minIndex = i;

    for (size_t j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

int main() {
  int myArr[] = {200,100,0,-100,-200,-300};
  size_t arrLength = sizeof(myArr)/sizeof(myArr[0]);

  selection_sort(myArr, arrLength);

  for (size_t x = 0; x < arrLength; x++) {
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
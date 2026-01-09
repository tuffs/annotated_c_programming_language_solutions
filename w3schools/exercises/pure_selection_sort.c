#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIdx = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }

    if (minIdx != i) {
      int temp = arr[i];
      arr[i] = arr[minIdx];
      arr[minIdx] = temp;
    }
  }
}

void sS(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
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
  int myArr[] = {500, -500, -3, 2, 100, 75, 50, 25, 0};
  int aL = sizeof(myArr)/sizeof(myArr[0]);

  sS(myArr, aL);

  for (int i = 0; i < aL; i++) {
    printf("%d ", myArr[i]);
  }
  
  printf("\n");

  return 0;
}

#include <stdio.h>

void sS(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    // as we progress, we have a progressing minIndex
    int minIndex = i;
    
    // now we create a loop to jump one ahead of
    // the i index for comparison
    for (int j = i + 1; j < n; j++) {

      // the comparison between i + 1 val and minIndex values
      if (arr[j] < arr[minIndex]) {
        // if i + 1 is less than arr at minIndex
        // minIndex is made the value of i + 1
        minIndex = j;
      }
    }
    
    // conditional swap, if minIndex and i are not equal, swap
    // arr at i for arr at minIndex value
    if (minIndex != i) {
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      int tmp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = tmp;
    }
  }
}

void pureSelectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      int tmp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = tmp;
    }
  }
}

int main() {
  int myArr[] = {500, -500, -3, 2, 100, 75, 50, 25, 0};
  int aL = sizeof(myArr)/sizeof(myArr[0]);

  pureSelectionSort(myArr, aL);

  for (int i = 0; i < aL; i++) {
    printf("%d ", myArr[i]);
  }
  
  printf("\n");

  return 0;
}

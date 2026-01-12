#include <stdio.h>
#include <stddef.h>

static inline void swap(int *a, int *b) {
  int t = *a; *a = *b; *b = t;
}

static void selection_sort(int arr[], size_t n) {
  if (n <= 1) return;

  for (size_t i = 0; i < n - 1; ++i) {
    size_t minIndex = i;

    for (size_t j = i + 1; j < n; ++j) {
     if (arr[j] < arr[minIndex]) minIndex = j; 
    }

    if (minIndex != i) swap(&arr[i], &arr[minIndex]);
  }
}

static void print_array(int arr[], size_t n) {
  putchar('[');
  for (size_t i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    if (i != n - 1) printf(", ");
  }
  puts("]");
}

int main(void) {
  int myArr[] = {333,222,111,100,10,0,-10,-100,-222,-333};
  size_t arrLength = sizeof myArr / sizeof myArr[0];

  selection_sort(myArr, arrLength);
  print_array(myArr, arrLength);

  return 0;
}
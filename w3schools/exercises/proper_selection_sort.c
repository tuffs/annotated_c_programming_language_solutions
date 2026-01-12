#include <stdio.h>
#include <stddef.h>

// Beautiful var swap!
static inline void swap_integer(int *a, int *b) {
  int t = *a; *a = *b; *b = t;
}

// Perfect Selection Sort
void selection_sort(int arr[], size_t n) {
  if (n < 2) return;

  for (size_t i = 0; i + 1 < n; ++i) {
    size_t minIndex = i;

    for (size_t j = i + 1; j < n; ++j) {
      if (arr[j] < arr[minIndex]) minIndex = j;
    }

    if (minIndex != i) swap_integer(&arr[i], &arr[minIndex]);
  }
}

// Print Implementation!
static void print_array(int arr[], size_t n) {
  putchar('[');
  for (size_t i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    if (i + 1 < n) printf(", ");
  }
  puts("]");
}

// Main sets up the unsorted array, array size
// and runs the appropriate functions.
int main(void) {
  int myArr[] = {300,200,100,0,-100,-200,-300};
  size_t arrLength = sizeof myArr / sizeof myArr[0];

  selection_sort(myArr, arrLength);
  print_array(myArr, arrLength);

  return 0;
}
#include <stdio.h>

int main() {
  // Delcaration: [Blocks][Rows][Columns]
  int example[2][4][3];
  int counter = 1;

  // Populating the 3D array
  for (int b = 0; b < 2; b++) {
    for (int r = 0; r < 4; r++) {
      for (int c = 0; c < 3; c++) {
        example[b][r][c] = counter++;
      }
    }
  }

  // Printing the 3D array to see the architecture
  for (int b = 0; b < 2; b++) {
    printf("--- Block %d ---\n", b);
    for (int r = 0; r < 4; r++) {
      for (int c = 0; c < 3; c++) {
        printf("%2d ", example[b][r][c]);
      }
      printf("\n"); // new line after each row
    }
    printf("\n");   // Space between blocks
  }

  return 0;
}

#include <stdio.h>

int main() {
  int numbers[3][5] = {
    {1, 2, 3, 4, 12}, 
    {4, 5, 6, 1, 91},
    {1, 1, 7, 0, 8},
  };
  
  // numbers[0][0] = 0;
  // numbers[1][2] = 2;

  int rows = sizeof(numbers) / sizeof(numbers[0]);
  int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
  
  for ( int i = 0; i < rows; i++ ) {
    for ( int j = 0; j < columns; j++ ) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }
  return 0;
}

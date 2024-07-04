#include <stdio.h>
#include <string.h>

int main() {
  int rows;
  int columns;
  char symbol;

  printf("Enter number of rows: ");
  scanf("%d", &rows);  

  for ( int i = 1; i <= rows; i++ ) {
    for ( int j = 0; j < i; j++ ) {
      printf("#");
    }
    printf("\n");
  }
}

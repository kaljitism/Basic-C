#include <stdio.h>

int main() {
  int number = 0;
  int sum = 0;

  do {
    printf("Enter a number above 0: >> ");
    scanf("%d", &number);

    if (number > 0) {
      sum += number;
    }
  } while( number > 0 );

  printf("%d\n", sum);

  return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main() {
  int i = 0;

  while ( true ) {
    i++;
    if ( i % 3 == 0 && i % 5 != 0 ) {
      printf("%d => fizz\n", i);
      continue;
    } 
    if ( i % 5 == 0 && i % 3 != 0 ) {
      printf("%d => buzz\n", i);
      continue;
    } 
    if ( i % 15 == 0 ) {
      printf("%d => fizzbuzz\n", i);
      continue;
    }
    if ( i > 100 ) {
      break;
    }
  }
}

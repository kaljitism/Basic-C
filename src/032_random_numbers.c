#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // rand() => generate a random nummber between 0 and 32,767
  // rand() % n => generate a random number between 0 and n
  // rand() % n + 1 or (rand() % n) + 1 => generate a number b/w 1 and n. 

  srand(time(0));  // Generate Seed
  int number1 = rand() % 6 + 1;  // Random number between 1 and 6
  int number2 = rand() % 6 + 1;  // Random number between 1 and 6
  int number3 = rand() % 6 + 1;  // Random number between 1 and 6

  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  return 0;
}

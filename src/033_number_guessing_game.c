#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


  const int MIN = 1;
  const int MAX = 50;

  int guess;
  int guesses = 0;
  int answer;

  srand(time(0));
  answer = (rand() % (MAX - MIN + 1)) + MIN;

  do {
    printf("Enter the guess: ");
    scanf("%d", &guess);

    if (guess > answer) {
      printf("Too high, try again!\n");
    } else if (guess < answer) {
      printf("Too low, try again!\n");
    } else {
      printf("Correct!\n");
    }
    guesses++;
    printf("%d\n", guesses);
  } while (guess != answer);

  printf("************************\n");
  printf("Answer: %d\n", answer);
  printf("Guesses: %d\n", guesses);

  return 0;
}

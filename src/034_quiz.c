#include <stdio.h>
#include <ctype.h>

int main() {
  char questions[][100] = {
    "1. What year did the C Language debut?",
    "2. Who is credited with creating C?",
    "3. What is the predecessor of C?"};

  char options[][100] = {
    "[A]. 1960", "[B]. 1972", "[C]. 1975", "[D]. 1999",
    "[A]. Dennis Ritchie", "[B]. Nikola Tesla", "[C]. John Carmack", "[D]. Bjanrne Stoustrop",
    "[A]. Objective-C", "[B]. B", "[C]. C++", "[D]. C#"};

  char answers[3] = {'B', 'A', 'B'};
  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
  char guess;
  int score = 0;

  printf("#####################\n");
  printf("    QUIZ GAME\n");
  printf("#####################\n\n");

  for (int i = 0; i < numberOfQuestions; i++) {
    printf("%s\n", questions[i]);
    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s    ", options[j]);
    }
    printf("\nGuess[A, B, C, D]: ");
    scanf(" %c", &guess);

    guess = toupper(guess);
    if (guess == answers[i]) {
      printf("Correct!!\n");
      score++;
    } else {
      printf("Wrong!!\n");
    }
    printf("\n");
  }

  printf("\nFINAL SCORE: %d/%d\n", score, numberOfQuestions);
  


  return 0;
}

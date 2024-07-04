#include <stdio.h>
#include <string.h>

// Struct - 
//
// Collection of related variables
// Listed under one name in a block of memory
// Very similar to classes in other languages

struct Player {
  char name[12];
  int score;
};

int main() {
  
  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "Aditya");
  player1.score = 11;

  strcpy(player2.name, "Nathan");
  player2.score = 11;

  if (player1.score == player2.score) {
    printf("Tie, No one won!\n");
    return 0;
  }

  (player1.score > player2.score)
  ? printf("%s won since he score %d and %s scored %d\n", player1.name, player1.score, player2.name, player2.score)
  : printf("%s won since he score %d and %s scored %d\n", player2.name, player2.score, player1.name, player1.score); 

  return 0;
}

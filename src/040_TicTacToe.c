#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

// Global Variables
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

// Function Prototypes
void resetBoard();
void displayBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
void clearScreen();
 
int main() {
  char winner = ' ';
  char response;

  do {
    winner = ' ';
    response = ' ';

    resetBoard();
  
    while(winner == ' ' && checkFreeSpaces != 0) {
      displayBoard();

      playerMove();
      winner = checkWinner();
      if (winner != ' ' || checkFreeSpaces() == 0) {
        break;
      }

      computerMove();
      winner = checkWinner();
      if (winner != ' ' || checkFreeSpaces() == 0) {
        break;
      } 
    }
  
    displayBoard();
    printWinner(winner); 
    
    printf("Would you like to play again?? [Y/N]: \n");
    scanf(" %c", &response);
    response = toupper(response);
  } while (response == 'Y');
  
  return 0;
}

void resetBoard() {
  for ( int i = 0; i < 3; i++ ) {
    for ( int j = 0; j < 3; j++ ) {
      board[i][j] = ' ';
    }
  }
}

void displayBoard() { 
  clearScreen();
  printf("|---|---|---|\n");
  printf("| %c | %c | %c |\n", board[0][0], board[0][1], board[0][2]);
  printf("|---|---|---|\n");
  printf("| %c | %c | %c |\n", board[1][0], board[1][1], board[1][2]);
  printf("|---|---|---|\n");
  printf("| %c | %c | %c |\n", board[2][0], board[2][1], board[2][2]);
  printf("|---|---|---|\n");
}

int checkFreeSpaces() {
  int freeSpaces = 9;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] != ' ') {
        freeSpaces--;
      }
    }
  }
  return freeSpaces;
}

void playerMove() {
  int x;
  int y;

  do {
    printf("Enter row #(1-3): ");
    scanf("%d", &x);
    x--;

    printf("Enter col #(1-3): ");
    scanf("%d", &y);
    y--;

    if (board[x][y] != ' ') {
      printf("Invalid Move!\n");
    } else {
      board[x][y] = PLAYER;
      break;
    }
  } while(board[x][y] != ' ');
}

void computerMove() {
  srand(time(0));
  int x;
  int y;

  if (checkFreeSpaces() > 0) {
    do {
      x = rand() % 3;
      y = rand() % 3;
    } while(board[x][y] != ' ' || board[x][y] == PLAYER);
    board[x][y] = COMPUTER;  
  } else {
    printWinner(' ');
  }
}

char checkWinner() {
  // win conditions for rows 
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
      return board[i][0];
    }
  }

  // win conditions for columns
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
      return board[0][i];
    }
  }

  // win conditions for diagonals
  bool rightDiagonal = (board[0][0] == board[1][1] && board[0][0] == board[2][2]);
  bool leftDiagonal = (board[0][2] == board[1][1] && board[0][2] == board[2][0]);

  if (rightDiagonal || leftDiagonal) {
    return board[1][1];
  }

  return ' ';
}

void printWinner(char winner) {
  if (winner == ' ' && checkFreeSpaces() == 0) {
    printf("Its a Tie!\n");
  } if (winner == 'X' || winner == 'O') {
    displayBoard();
    printf("%c is the winner!!\n", winner);
  }
}

void clearScreen() {
  system("@cls||clear");
}

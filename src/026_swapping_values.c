#include <stdio.h>
#include <string.h>

void swapStrings(char[], char[]);
void swapCharacters(char, char);

int main() {
  char x = 'X';
  char y = 'Y';
  swapCharacters(x, y);

  char strX[15] = "water";
  char strY[15] = "lemonade";
  swapStrings(strX, strY);

  return 0;
}

void swapStrings(char strX[], char strY[]) {
  char temp[15];
  strcpy(temp, strX);
  strcpy(strX, strY);
  strcpy(strY, temp);

  printf("strX: %s\n", strX);
  printf("strY: %s\n", strY);
}

void swapCharacters(char x, char y) {
  char temp;
  temp = x;
  x = y;
  y = temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);
}

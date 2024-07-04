#include <stdio.h>

int main() {
  char grade;
  
  printf("\nEnter a letter grade[A, B, C]: ");
  scanf("%c", &grade);

  switch (grade) {
    case 'A':
      printf("Perfect!\n");
      break;
    case 'B':
      printf("You can do better!!\n");
      break;
    case 'C':
      printf("You should work hard!!\n");
      break;
    default:
      printf("\nPlease enter only valid grades.\n", grade);
  }

  return 0;
}

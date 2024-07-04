#include <stdio.h>
#include <string.h>

int main() {
  /* User Input */

  char name[25]; // bytes
  int age;
  
  // scanf() reads till first whitespace
  // to include whitespaces, use fgets()
  // by default, when you hit enter in fgets, it includes \n in the input

  printf("What is your name??\n>> ");
  // scanf("%s", &name);   
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  printf("How old are you??\n>> ");
  scanf("%d", &age);

  printf("\n --- USER DETAILS --- \nName: %s\nAge: %d\n", name, age);

  return 0;
}



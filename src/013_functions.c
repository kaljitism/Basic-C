#include <stdio.h>

void birthday(char name[], int age) {
  printf("Heppy Birthday to yuuuuu!!\n");
  printf("Heppy Birthday to yuuuuuuuuu!!\n");
  printf("Heppy Bbb..uu..rthday Dee..uuu..rrr %s!!\n", name);
  printf("Haapppy Birthday to yuuu!!\n");

  printf("\nCongratulations on being %d years old!\n", age);
}

int main() {
  char name[] = "Aditya";
  int age = 22;

  birthday(name, age);
  return 0;
}



#include <stdio.h>
#include <string.h>

struct Student {
  char name[12];
  float gpa;
};

int main() {

  struct Student student1 = {"Aditya", 1.3};
  struct Student student2 = {"Spongebob", 3.8};
  struct Student student3 = {"Kate", 4.0};
  struct Student student4 = {"Squidward", 2.4};
  
  struct Student students[] = {student1, student2, student3, student4};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
    printf("%s\n", students[i].name);
  }

  return 0;
}

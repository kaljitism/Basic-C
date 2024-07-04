#include <stdio.h>

// enums - 
//
// a user defined type of named integer identifiers

enum Day {
  Monday = 1, 
  Tuesday = 2,
  Wednesday = 3,
  Thursday = 4, 
  Friday = 5,
  Saturday = 6,
  Sunday = 7,
};

int main() {
  
  enum Day today = Sunday;

  if (today == Saturday || today == Sunday) {
    printf("Is the weekend, PARTY TIME!!\n");
  } else {
    printf("I gotta work today!\n");
  }

  return 0;
}

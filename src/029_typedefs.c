#include <stdio.h>
#include <string.h>

// Typedef => Reserved keyword that gives an existing datatype a "nickname"

// typedef char user[25];

typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int main() {
  
  User user1 = {"Aditya", "password123", 1243232211};  
  User user2 = {"Ema", "passwordsd33", 1209719721};

  printf("%s has id of %d\n", user1.name, user1.id);
  printf("%s has id of %d\n", user2.name, user2.id);

  return 0;
}

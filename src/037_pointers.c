#include <stdio.h>

void printVariable(int *pVariable) {
  printf("Variable: %d\n", *pVariable); // dereference
}

int main() {
  // Pointers 
  //
  // A variable-like reference that holds a memory address to another variable
  // * => indirection operator(value at address)
  //
  // Advantages of using Pointers - 
  // 1. Less time in program execution
  // 2. Working on the original variable
  // 3. With the help of pointers, we can create data structures
  // 4. Returning more than one values from functions
  // 5. Searching and sorting large data very easily
  // 6. Dynamic Memory Allocation 
  
  int variable = 21;
  int *pVariable = NULL;  // Its considered good practice to assign NULL when declaring pointers. 
  pVariable = &variable;  // POINTER of variable

  printf("Value of variable: %d\n", variable);
  printf("Address of variable: %p\n", &variable);
  printf("Size of variable: %d bytes\n\n", sizeof(variable));

  printf("Value of pointer pVariable: %p\n", pVariable);
  printf("Value at stored address in pointer: %d\n", *pVariable);  // dereferencing
  printf("Size of pointer pVariable: %d bytes\n\n", sizeof(pVariable));

  printVariable(pVariable);

  return 0;
}

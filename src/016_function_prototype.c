#include <stdio.h>

// Function Prototype - 
//
// function declaration before main().
// it ensures that you are writing functions with correct arguments. 
//
// Important - 
//
// Many C Compilers do not check for parameter matching. 
// Missing arg will result in unexpected behaviour.
// A function prototype causes the compiler to flag an error uf arguements are missing.
//
// Advantages -
//
// Easier to navigate a program w/ main() at the top 
// Helps with debugging. 
// Commonly used in Header Files. 

void hello(char[], int);

int main() {
  char name[] = "Aditya";
  int age = 22;

  hello(name, age);
  
  return 0;
}

void hello(char name[], int age) {
  printf("Hello %s, You are %d years old!\n", name, age);
}

#include <stdio.h>

int main() {
  // memory         = an array of bytes within RAM (street)
  // memory block   = a single unit(byte) within memory, used to hald some value(home)
  // memory address = the address of where a memory block is located(home address)
  
  short a = 'X';
  long b = 'Y';
  int c[2] = {a, b};

  printf("Size of a: %lu bytes\n", sizeof(a));
  printf("Size of b: %lu bytes\n", sizeof(b));
  printf("Size of c: %lu bytes\n", sizeof(c));

  printf("Memory Address of a: %p\n", &a);
  printf("Memory Address of b: %p\n", &b);
  printf("Memory Address of c: %p\n", &c);

  return 0;
}

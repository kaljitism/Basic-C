#include <stdio.h>
#include <stdbool.h>

int main() {
  // The Classic Hello World Program  
  printf("Hello World!\n");

  /* This is a multiline comment
   * This
   * is
   * a
   * multiline
   * comment
   */
  printf("C is reallyy goood!!\n");
  printf("-\"me\"\n");

  int x; // Declaration 
  x = 123; // Initialiation 
  int y = 321; // Declaration + Initialization
  
  int age = 21; // int 
  float gpa = 2.05;  // floating point
  char grade = 'C'; // string character
  char name[] = "Aditya"; // array of characters

  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
  printf("You got %c in test", grade);
 
  /* Data Types */
 
  char a = 'C'; // %c single character
  char b[] = "Bro"; // %s array of characters
  float c = 3.1415; // %f 4 bytes - 32-bit precision 
  double d = 3.14159265389793; // %lf 8 bytes - 64-bit precision
  bool e = true; // %d 1 byte - true or false
  char f = 100;; // %d or %c - 1 byte => -128 to +127
  unsigned char g = 255; // %d or %c 1 byte (0 to 255) 
  short int h = 32767; // %d 2 bytes (-32,768 to +32,767)
  unsigned short int i = 65535; // %d 2 bytes (0 to +65,535)
  int j = 2147483647; // %d 4 bytes (-2,147,483,648 to +2,147,483,647)
  unsigned int k = 4294967295L; // %u 4 bytes (0 to +4,294,967,295)
  long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion)
  unsigned long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion)
  
  printf("%c\n", a);
  printf("%s\n", b);
  printf("%0.15f\n", c);
  printf("%0.15lf\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  printf("%d\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%lu\n", m);
  printf("Data ==> Memory Address %c - %p,\n %s - %p,\n %f - %p,\n %lf - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %u - %p,\n %lld - %p,\n %lu - %p\n", a, &a, b, &b, c, &c, d, &d, e, &e, f, &f, g, &g, h, &h, i, &i, j, &j, k, &k, l, &l, m, &m);

  return 0;
}

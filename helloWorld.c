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
  char f = 100; // %d or %c - 1 byte => -128 to +127
  unsigned char g = 255; // %d or %c 1 byte (0 to 255) 
  short h = 32770; // %d 2 bytes (-32,768 to +32,767)
  unsigned short i = 65535; // %d 2 bytes (0 to +65,535)
  int j = 2147483647; // %d 4 bytes (-2,147,483,648 to +2,147,483,647)
  unsigned int k = 4294967295L; // %u 4 bytes (0 to +4,294,967,295)
  long long l = 9223372036854775807; // %lld 8 bytes (-9 quintillion to +9 quintillion)
  unsigned long long m = 18446744073709551615U; // %llu 8 bytes (0 to +18 quintillion)
  
  printf("%c\n", a);  // character
  printf("%s\n", b);  // character array
  printf("%0.15f\n", c);  // float
  printf("%0.15lf\n", d); // double
  printf("%d\n", e);  // bool
  printf("%c\n", f);  // character as ascii value(would be int if we use %d)
  printf("%d\n", g);  // unsigned char as numeric value
  printf("%d\n", h);  // short
  printf("%d\n", i);  // unsigned short
  printf("%d\n", j);  // int 
  printf("%u\n", k);  // unsigned int
  printf("%lld\n", l);  // long long  int
  printf("%llu\n", m);   // unsigned long long int
  printf("Data ==> Memory Address %c - %p,\n %s - %p,\n %f - %p,\n %lf - %p,\n %d - %p,\n %c - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %d - %p,\n %u - %p,\n %lld - %p,\n %lu - %p\n", a, &a, b, &b, c, &c, d, &d, e, &e, f, &f, g, &g, h, &h, i, &i, j, &j, k, &k, l, &l, m, &m);

  // Format Specifiers - defines and formats a type of data to be displayed. 
  
  // %c = character
  // %s = string (array of characters) 
  // %f = float
  // %lf = double
  // %d = integer
  // %.1 => 1 = decimal precision
  // %1 = minimum field width
  // %- = left align
  
  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%7.2f\n", item1);
  printf("Item 2: $%7.0f\n", item2);
  printf("Item 3: $%7.2f\n", item3);

  return 0;
}

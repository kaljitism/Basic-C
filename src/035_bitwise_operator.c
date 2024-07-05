#include <stdio.h>

int main() {
  // Bitwise Operators
  // Special Operators used in bit level programming 
  // &  = AND
  // |  = OR
  // ^  = XOR
  // << = left shift
  // >> = right shift

  int x = 6;                    //  6  = 00000110
  int y = 12;                   // 12  = 00001100
  int x_AND_y = x & y;  // AND  //  4  = 00000100
  int x_OR_y = x | y;   // OR   // 14  = 00001110
  int x_XOR_y = x ^ y;  // XOR  // 10  = 00001010
  int y_leftShift_2 = y << 2;   // 48  = 00110000 [Doubles the number]
  int y_rightShift_2 = y >> 2;  //  3  = 00000011 [ Halves the number]
  
  printf("x & y  = %d\n", x_AND_y);
  printf("x | y  = %d\n", x_OR_y);
  printf("x ^ y  = %d\n", x_XOR_y);
  printf("y << 2 = %d\n", y_leftShift_2);
  printf("y >> 2 = %d\n", y_rightShift_2);
  
  return 0;
}

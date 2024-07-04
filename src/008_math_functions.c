#include <stdio.h>
#include <math.h>

int main() {
  int sqrt_num = 9;
  int base = 2;
  int exponent = 4;
  float pi = 3.14;
  int negativeValue = -100;
  int integer = 10;
  int anglePiByFour = 45;

  double A = sqrt(sqrt_num);
  double B = pow(base, exponent);
  int C = round(pi);
  int D = ceil(pi);
  int E = floor(pi);
  double F = fabs(negativeValue);
  double G = log(integer);
  double H = sin(anglePiByFour);
  double I = cos(anglePiByFour);
  double J = tan(anglePiByFour);

  printf("Square root of %d is %lf\n", sqrt_num, A);
  printf("%d raised to the power of %d is %lf\n", base, exponent, B);
  printf("Round to nearest integer value of %f is %d\n", pi, C);
  printf("Ceil to %f is %d\n", pi, D);
  printf("Floor to %f is %d\n", pi, E);
  printf("Absolute value of %d is %d\n", F, F);
  printf("Log of %d is %lf\n", integer, G);
  printf("Sine of %d is %lf\n", anglePiByFour, H);
  printf("Cosine of %d is %lf\n", anglePiByFour, I);
  printf("Tangent of %d is %lf\n", anglePiByFour, J);

    return 0;
}

#include <stdio.h>

int main() {

  const double Pi = 3.14159;
  double radius;
  double circumference;

  printf("Enter radius: ");
  scanf("%lf", &radius);

  circumference = 2 * radius * Pi;
  printf("\nCircumference: %lf\n", circumference);

  return 0;
}

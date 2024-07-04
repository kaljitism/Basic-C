#include <stdio.h>

float square(double x) {
  return x * x;
}

int main() {
  double x = 7;
  double sqrd = square(x);
  printf("%.2f\n", sqrd);

  return 0;
}

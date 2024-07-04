#include <stdio.h>
#include <ctype.h>

int main() {
  char unit;
  float temperature;
  float updatedTemperature;

  printf("Is the temperature in (F) or (C): ");
  scanf("%c", &unit);
  printf("Temperature Value: ");
  scanf("%f", &temperature);

  unit = toupper(unit);

  if (unit == 'C') {
    updatedTemperature = ( ( 9 / 5 ) * temperature ) + 32;
    printf("\nFahrenheit Temperature: %.1f\n", updatedTemperature);
  } else if (unit == 'F') {
    updatedTemperature = (( temperature - 32 ) * 5) / 9 ;
    printf("\nCelcius Temperature: %.1f\n", updatedTemperature);
  } else {
    printf("\n %c is not a valid unit of Temperature\n", unit);
  }

  return 0;
}

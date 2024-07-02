#include <stdio.h>

int main() {

    // Arithmetic Operators
    // +, -, *, /, %, ++, --

    int X = 5;
    int Y = 2;

    X++;
    X++;
    Y++;

    // Augment Assignment Operators
    Y *= 3;

    float z = (float) X / (float) Y;
    printf("%0.2f\n", z);
}

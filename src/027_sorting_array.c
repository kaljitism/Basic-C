#include <stdio.h>

void printArray(int[], int);
void sort(int[], int);
void swap(int[], int, int);
void doNothing();

int main() {
  int array[] = {13, 1977, 19, 1, 94, 345, 18, 1981, 86, 191};
  int size = sizeof(array) / sizeof(array[0]);

  printArray(array, size);
  sort(array, size);
  printArray(array, size);
  
  return 0;
}

void printArray(int array[], int size) {
  for ( int i = 0; i < size; i++ ) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      ( array[j] > array[j + 1] ) 
      ? swap(array, j, j+1)
      : doNothing(); 
    }
  }
}

void swap(int array[], int largerIntegerIndex, int smallerIntegerIndex) {
  int temp;
  temp = array[largerIntegerIndex];
  array[largerIntegerIndex] = array[smallerIntegerIndex];
  array[smallerIntegerIndex] = temp;
}

void doNothing() {}

 #include <stdio.h>

int main() {

  int age;
  printf("Enter age: ");
  scanf("%d", &age);

  if (age == 0 || age == 1) {
    printf("\nToo young to do anything!\n");
  } else if (age >= 1 && age <= 3) {
    printf("\nPlay fearlessly and stay happy!!\n");
  } else if (age >= 3 && age <= 5) {
    printf("\nLearn about the world, learn to read, play and stay happy!!\n");
  } else if (age < 10 && age > 5) {
    printf("\nPlay Play Play and learn as much as you can!!\n");
  } else {
    printf("\nUse internet now, I will not spoon feed you everything!\n");
  }

  return 0;
}

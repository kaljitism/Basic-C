#include <stdio.h>

int main() {
  FILE *pFile = fopen("./poem.txt", "r");
  char buffer[255];
  // fgets(buffer, 255, pFile);  // read one line - 255 bytes/ 255 characters
  // printf("%s\n", buffer);
  
  if (pFile == NULL) {
    printf("Unable to open file!\n");
  } else {
    while (fgets(buffer, 255, pFile) != NULL) {
      printf("%s", buffer);
    }
    fclose(pFile);
  }
  return 0;
}

#include <stdio.h>

int main() {
  
  // Opening, Writing to and closing a File. 
  FILE *pF = fopen("./test.txt", "w");
  fprintf(pF, "Spongebob Squarepants\n");
  fclose(pF);

  // Deleting the File
  if (remove("test.txt") == 0) {
    printf("File deleted succesfully!\n");
  } else {
    printf("File not deleted!\n");
  }

  return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
  FILE * fpoint;
  int i;
  int sum = 0;
  int arr[10];
  char *fileName = malloc(sizeof(char) * strlen(argv[1]) + 1);
  strcpy(fileName, argv[1]);
  fpoint = fopen(fileName, "r");

  for(i = 0; i <= 9; i++)
  {
   fscanf(fpoint, "%d", &arr[i]);
  }

  for(i = 0; i <= 9; i++){
    sum += arr[i];
  }
  printf("%d\n", sum);
  return 0;
}

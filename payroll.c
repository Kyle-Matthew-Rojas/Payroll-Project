#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]){
  char *first_name = malloc(sizeof(char) * (strlen(argv[2]) + 1));
  strcpy(first_name, argv[2]);
  char *last_name = malloc(sizeof(char) * (strlen(argv[1]) + 1));
  strcpy(last_name, argv[1]);
  float minutes =(float) atoi(argv[3]);
  double timeworked = (minutes / 60);
  int hourlywage = atoi(argv[4]);
  float sum = timeworked * hourlywage;
  printf("%s %s: %.2f\n", first_name, last_name, sum);
}

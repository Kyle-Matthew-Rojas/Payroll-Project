#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  FILE * fpoint;
  int arr[100], i = 0, arrSize = 0;
  int j, tempNum;
  char *fileName = malloc(sizeof(char) * strlen(argv[1]) + 1);
  strcpy(fileName, argv[1]);
  fpoint = fopen(fileName, "r");

  while(!feof(fpoint))
  {
  fscanf(fpoint, "%d", &arr[i]);
  arrSize = i;
  i++;
  }

 for(i = 0; i < arrSize; i++)
  {
    for(j = i + 1; j < arrSize; j++)
    {
      if(arr[i] > arr[j])
      {
       tempNum = arr[i];
       arr[i] = arr[j];
       arr[j] = tempNum;
      }
    }
  }

   for(i = 0; i < arrSize; i++)
   {
     printf("%d", arr[i]);
     if(i != arrSize - 1)
     {
       printf(" ");
     }
   }
   printf("\n");
}

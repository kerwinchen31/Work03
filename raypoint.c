#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
  srand( time(NULL) );
  int ray[10];
  int rye[10];
  
  for (int i = 0; i < 10; i++){
    ray[i] = rand();
  }
  ray[9] = 0;

  printf("values in array: \n");
  for (int i = 0; i < 10; i++){
    printf("%d\n", ray[i]);
  }

  for(int i = 0; i < 10; i++)
    *(rye + i) = *(ray + 9 - i);

  printf("backwards, from new array: \n");
  for (int i = 0; i < 10; i++){
    printf("%d\n", rye[i]);
  }
}

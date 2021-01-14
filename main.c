#include <stdio.h>
#include <stdlib.h>

int main(void) {

  /***************EJERCICIO 1***************/

  int* pa = malloc(10 * sizeof(int));
  char* pch = malloc(10);

  for(int i = 0; i<9; i++){
    pa[i] = 2*i + 1;
    printf("\n%i", pa[i]);
  }

  return 0;
}
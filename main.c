#include <stdio.h>
#include <stdlib.h>

int main(void) {

  /***************EJERCICIO 1 y 2***************/
  printf("Ejercicio 1 y 2:");
  int* pa = malloc(10 * sizeof(int));
  char* pch = malloc(10);

  for(int i = 0; i<10; i++){
    pa[i] = 2*i + 1;
    printf("\n[%d](%p) = %d", i, &pa[i], pa[i]); 
  }

  /********************************************/
  
  /*************** EJERCICIO 3  ***************/
  printf("\n\nEjercicio 3:");
  for (int i = 0; i < 10; i++){

    *(pa + i) = 2*i + 1;
    printf("\n[%d](%p) = %d", i, &pa[i], pa[i]); 

  } 

  /********************************************/


  /*************** EJERCICIO 4 y 5  **************/

  printf("\n\nEjercicio 4 y 5:");

  for (int i = 0; i < 10; i++){
    
    *(pch + i) = 97 + i;  //97 es el # ascii que representa la a
    printf("\n[%d](%p) = %c", i, &pch[i], pch[i]); 
  
  }

  /***********************************************/

  return 0;
}
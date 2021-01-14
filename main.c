#include <stdio.h>
#include <stdlib.h>

int main(void) {

  /***************EJERCICIO 1 y 2***************/

  int* pa = malloc(10 * sizeof(int));
  char* pch = malloc(10);

  for(int i = 0; i<10; i++){
    pa[i] = 2*i + 1;
    printf("\n[%d](%p) = %d", i, &pa[i], pa[i]); 
  }
  
  /********************************************/
  
  /*************** EJERCICIO 3  **************/
  
  for (int i = 0; i < 10; i++){

    *(pa + i) = 2*i + 1;
    printf("\n[%d](%p) = %d", i, &pa[i], pa[i]); 

  } 


  /********************************************/


  /*************** EJERCICIO 4 y 5  **************/

  printf("\n");

  for (int i = 0; i < 10; i++){
    
    *(pch + i) = 97 + i;
    printf("\n[%d](%p) = %c", i, &pch[i], pch[i]); 
  
  }


  /***********************************************/




  return 0;
}
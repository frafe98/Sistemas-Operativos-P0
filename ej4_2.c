#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_mem(void* pointer, char* type, int number){

  for (int i = 0; i < number; i++){
  
    if(strcmp(type, "char") == 0){
        

        printf("\n[%d] (%p) = %c",i, (pointer + i * sizeof(type)), *((char*)pointer + i));

    }else if (strcmp(type, "int") == 0){
        
        printf("\n[%d] (%p) = %d",i, (pointer + i * sizeof(type)), *((int*)pointer + i));
    }
    
  }

}


int main(void) {

  int* pa = malloc(10 * sizeof(int));
  char* pch = malloc(10);
  
  /*************** EJERCICIO 3  ***************/
  for (int i = 0; i < 10; i++){

    *(pa + i) = 2*i + 1;

  } 

  /********************************************/

  /*************** EJERCICIO 4 y 5  **************/

    

    for (int i = 0; i < 10; i++){
      
      *(pch + i) = 97 + i;  //97 es el # ascii que representa la a
    
    }

    /***********************************************/
    printf("\npa:");
    void* pointer = (void*) pa;
    print_mem(pointer, "int", 10);


    printf("\n\npch:");
    void* pointer2 = (void*) pch;
    print_mem(pointer2, "char", 10);


}




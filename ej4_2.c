#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    void* pointer = &pa;
    print_mem(pointer, "int", 5);


}

void print_mem(void* pointer, char* type, int number){

  for (int i = 0; i < number; i++){
  
    if(strcmp(type, "char") == 0){
        printf("Es un char!");

        printf("%p", (pointer + i * sizeof(type)));

    }else if (strcmp(type, "int") == 0){
        printf("Es un int!");

        printf("%p", (pointer + i * sizeof(type)));
    }
    
  }

}


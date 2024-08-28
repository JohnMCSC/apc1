#include <stdio.h>
int main(){
  printf("O tipo 'char' ocupa %lu bytes na memória.\n", sizeof(char));
  printf("O tipo int ocupa %lu bytes na memória.\n", sizeof(int));
  printf("O tipo float ocupa %lu bytes na memória.\n", sizeof(float));
  printf("O tipo double ocupa %lu bytes na memória.\n", sizeof(double));
  printf("O tipo void ocupa %lu bytes na memória.\n", sizeof(void));


  
  return 0;
}
#include <stdio.h>

int main() {
  
  int numero = 0;
  printf("Digite um número inteiro: ");
  scanf("%i", &numero);
  printf("Você digitou o número %i\n", numero);

  int cdx = 0;
  int cdy = 0;

  printf("Digite as coordenadas x e y no formato: coordenadax espaço coordenada y");
  scanf("%i %i", &cdx, &cdy);

  printf("Você digitou as coordenadas\n %i x e %i y", cdx, cdy);
  


  
  return 0;
}
#include <stdio.h>

int main(){
  long int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Digite a matricula: ");
  scanf("%li", &matricula);
  
  printf("Digite a nota A1: ");
  scanf("%f", &a1);
  
  printf("Digite a nota A2: ");
  scanf("%f", &a2);
  
  media = (a1 + a2) / 2;

  printf("Matricula %li\t A1 %.2f\t A2 %.2f\t Media %.2f\n", matricula, a1, a2, media);
  
}
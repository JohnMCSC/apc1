#include <stdio.h>

int main() {
  char tecla = '\0';
  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);
  
  char nome[31];
  printf("Digite o seu nome: ");
  scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);
  
  
  return 0;
  
}
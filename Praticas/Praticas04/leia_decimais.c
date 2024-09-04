#include <stdio.h>

int main() {
  float preco = 0.0f;
  printf("Digite o preço do produto: ");
  scanf( "%f", &preco);
  printf("Você digitou o preço %.2f\n", preco);
  double fracao = 0.0;
  printf("Digite uma fração: ");
  scanf("%lf", &fracao);
  printf("Você digitou a fração %.10f\n", fracao);
  
  
  return 0;
}
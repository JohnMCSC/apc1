#include <stdio.h>

int main () {
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  printf("Digite o nome do produto: ");
  scanf("%s", produto);
  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  printf("Digite o valor: ");
  scanf("%f", &valor);

  printf("==============================\n");
  printf("            PEDIDO           \n");
  printf("==============================\n");
  printf("Produto        QTD  VALOR UNIT\n");
  printf("%s             %i   %.2f\n", produto, quantidade, valor);
  
  return 0;
}
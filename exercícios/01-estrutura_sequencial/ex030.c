#include <stdio.h>
/* --enunciado--
Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%
*/
int main(void){
  float preco_produto;
  printf("Digite o preço do produto: \n");
  scanf("%f%*c", &preco_produto);

  printf("Preço do produto com dez porcento de desconto: R$%.2f", preco_produto - (preco_produto * 0.10));
  return 0;
}
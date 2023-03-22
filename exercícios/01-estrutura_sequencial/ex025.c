#include <stdio.h>
/* --enunciado--
Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado
*/
int main(void){
  float espetaculo_custo, convite_preco;
  printf("Digite o custo que o espetáculo irá gerar e o preço do convite:\n");
  scanf("%f%*c%f%*c", &espetaculo_custo, &convite_preco);

  printf("Quantidade mínima de ingresos a serem vendidos: %.0f", espetaculo_custo/convite_preco);
  return 0;
}
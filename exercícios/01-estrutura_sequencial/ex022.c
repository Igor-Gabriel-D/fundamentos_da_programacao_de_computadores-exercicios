#include <stdio.h>
/* --enunciado--
sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. calcule e mostre: a) o valor de cada quilowatt; b) o valor a ser pago por essa residência; c) o valor a ser pago com desconto de 15%
*/
int main(void){
  float salario_min, kwts_consumido, valor_cobrado, valor_desconto;
  printf("Digite o valor do salário mínimo:\n");
  scanf("%f%*c", &salario_min);
  printf("Digite a quantidade de quilowhatts consumidos:");
  scanf("%f%*c", &kwts_consumido);

  valor_cobrado = (salario_min/5) * kwts_consumido;
  valor_desconto = valor_cobrado - (valor_cobrado*0.15);
  
  printf("Valor por cada quilowatt: R$%.2f\nValor total a ser pago: R$%.2f\nValor a ser pago com 15 porcento de desconto: R$%.2f", salario_min/5, valor_cobrado,  valor_desconto);
  
  return 0;
}
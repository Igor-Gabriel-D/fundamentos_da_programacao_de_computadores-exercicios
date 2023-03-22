#include <stdio.h>

/* --enunciado--
Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.
*/

int main(void) {
  float salario, imposto, sal_recebido;
  printf("Digite o seu salário Atual:\n");
  scanf("%f%*c", &salario);
  
  imposto = salario * 0.10;

  sal_recebido = salario + 50 - imposto;
  printf("Salário a receber com gratificções e impostos: R$%.2f", sal_recebido);
  return 0;
}
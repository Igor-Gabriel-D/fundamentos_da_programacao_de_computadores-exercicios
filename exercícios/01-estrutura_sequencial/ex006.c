#include <stdio.h>

/* --enunciado--
Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.
*/

int main(void) {
  float salario, grat, imposto, sal_recebido;
  printf("Digite o seu salário Atual:\n");
  scanf("%f%*c", &salario);
  grat = salario * 0.05;
  imposto = salario * 0.07;

  sal_recebido = salario + grat - imposto;
  printf("Salário a receber com gratificções e impostos: R$%.2f", sal_recebido);
  return 0;
}
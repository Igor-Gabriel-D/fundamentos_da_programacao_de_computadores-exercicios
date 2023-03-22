#include <stdio.h>

/* --enunciado--
Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
*/

int main(void) {
  float salario, percentual, novo_salario;
  printf("Digite o seu salário Atual e percentual de aumento: \n");
  scanf("%f%*c%f%*c", &salario, &percentual);

  novo_salario = salario + (salario*(percentual/100) );
  printf("Seu salário aumentou em: R$%.2f, novo salário: R$%.2f", (novo_salario - salario), novo_salario);
  return 0;
}
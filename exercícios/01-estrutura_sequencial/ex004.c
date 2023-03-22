#include <stdio.h>

/* --enunciado--
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

int main(void) {
  float salario, novo_salario;
  printf("Digite o seu salário Atual: ");
  scanf("%f%*c", &salario);
  novo_salario = salario + (salario*0.25);
  printf("Seu salário foi reajustado para: R$%.2f",novo_salario);
  return 0;
}
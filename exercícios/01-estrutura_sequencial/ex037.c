#include <stdio.h>
/* --enunciado--
Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que esse funcionário ganha. 
*/
int main(void){
  float salario_min, salario_fun;
  printf("Digite o valor do salário mínimo e valor so salário do funcionário:\n");
  scanf("%f%*c%f%*c", &salario_min, &salario_fun);
  printf("O funcionário ganha: %.1f salários mínimos", salario_fun/salario_min);
  return 0;
}
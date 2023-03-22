#include <stdio.h>
/* --enunciado--
Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final
*/
int main(void){
  float salario_fixo, vendas, salario_final;
  printf("Ensira o salário fixo do funcionário: R$");
  scanf("%f%*c", &salario_fixo);
  printf("Ensira o valor de suas vendas: R$");
  scanf("%f%*c", &vendas);
  salario_final = salario_fixo + (vendas*0.04);
  printf("Salário final do funionário: R$%.2f", salario_final);
  return 0;
}
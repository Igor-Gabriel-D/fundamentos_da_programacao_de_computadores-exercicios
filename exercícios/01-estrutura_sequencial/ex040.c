#include <stdio.h>
/* --enunciado--
João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João
*/
int main(void){
  float salario, conta1, conta2, salario_final;
  printf("Digite o salário de joão:\n");
  scanf("%f%*c", &salario);
  printf("Digite o valor das duas conta a serem pagas:\n");
  scanf("%f%*c%f%*c", &conta1, &conta2);
  salario_final = salario - ((conta1+(conta1*0.02)) + (conta2 + (conta2*0.02)));

  printf("salário final: R$%.2f", salario_final);
  return 0;
}
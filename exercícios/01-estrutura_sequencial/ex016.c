#include <stdio.h>
/* --enunciado--
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras: a) a hora trabalhada vale a metade do salário mínimo. b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. c) o imposto equivale a 3% do salário bruto. d) o salário a receber equivale ao salário bruto menos o imposto
*/
int main(void){
  float salario_min, salario_b;
  int horas_t;
  printf("Digite o valor do salário mínimo e o número de horas trabalhadas:\n");
  scanf("%f%*c%d%*c", &salario_min, &horas_t);

  salario_b = horas_t*(salario_min/2);

  printf("Salário a recebr: R$%.2f", salario_b - (salario_b*0.03));
  
  return 0;
}
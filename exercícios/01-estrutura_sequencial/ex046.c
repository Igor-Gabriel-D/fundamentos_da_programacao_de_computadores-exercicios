#include <stdio.h>
/* --enunciado--
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir: a) a hora trabalhada vale 1/8 do salário mínimo; b) a hora extra vale 1/4 do salário mínimo; c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra; e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/
int main(void){
  float horas_t, salario_min, horas_extras;
  printf("Digite o valor do salário mínimo o número de horas trabalhadas e o número de horas extras trabalhadas:\n");
  scanf("%f%*c%f%*c%f%*c", &salario_min, &horas_t, &horas_extras);

  printf("Salário a receber: R$%.2f", ((0.125*salario_min)*horas_t)+((0.25*salario_min)*horas_extras));
  return 0;
}
#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro
*/
int main(void){
  float num1, num2;
  printf("Digite dois números maiores que zero:\n");
  scanf("%f%*c%f%*c", &num1, &num2);

  printf("%.0f elevado a %.0f é igual a: %.0f", num1, num2, pow(num1, num2));

  return 0;
}
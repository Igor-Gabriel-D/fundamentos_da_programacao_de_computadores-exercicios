#include <stdio.h>

/* --enunciado--
Faça um programa que receba quatro números inteiros, calcule e mostre a soma
desses números.
*/

int main(void) {
  int num1, num2, num3, num4, soma;
  scanf("%d%*c%d%*c%d%*c%d%*c", &num1, &num2, &num3, &num4);
  soma = num1 + num2 + num3 + num4;
  printf("%d", soma);

  return 0;
}
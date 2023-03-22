#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba um número positivo e maior que zero, calcule e mostre: a) o número digitado ao quadrado; b) o número digitado ao cubo; c) a raiz quadrada do número digitado; d) a raiz cúbica do número digitado
*/
int main(void){
  float num, quad, cubo, raiz_q, raiz_c;
  printf("Digite um número maior que zero:\n");
  scanf("%f%*c", &num);
  quad = pow(num, 2);
  cubo = pow(num, 3);
  raiz_q = sqrt(num);
  raiz_c = cbrt(num);

  printf("Ao quadrado: %.1f\nAo cubo: %.1f\nRaiz quadrada: %.1f\nRaiz cúbica: %.1f", quad, cubo, raiz_q, raiz_c);

  return 0;
}
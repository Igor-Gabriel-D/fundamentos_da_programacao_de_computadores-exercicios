#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba um número real, encontre e mostre: a) a parte inteira desse número; b) a parte fracionária desse número; c) o arredondamento desse número
*/
int main(void){
  float num;
  printf("Digite um numero real:\n");
  scanf("%f%*c", &num);
  printf("parte inteira: %.0f\nParte fracionária: %.2f\nArredondamento: %.0f", ceil(num) - 1, num - (ceil(num) - 1), ceil(num));
  
  return 0;
}
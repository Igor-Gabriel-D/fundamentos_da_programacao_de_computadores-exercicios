#include <stdio.h>
/* --enunciado--
Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações
*/
int main(void){
  float num1, num2;
  printf("Digite dois números: \n");
  scanf("%f%*c%f%*c", &num1, &num2);
  
  printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
  return 0;
}
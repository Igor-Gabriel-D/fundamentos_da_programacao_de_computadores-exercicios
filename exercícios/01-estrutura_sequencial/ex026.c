#include <stdio.h>
/* --enunciado--
Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo. 
*/
int main(void){
  int num1, num2;
  printf("Digite dois números: \n");
  scanf("%d%*c%d%*c", &num1, &num2);
  
  printf("%d - %d = %d", num1, num2, num1 - num2);
  return 0;
}
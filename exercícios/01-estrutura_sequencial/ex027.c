#include <stdio.h>
/* --enunciado--
Faça um programa que receba três números, calcule e mostre a multiplicação desses números 
*/
int main(void){
  int num1, num2;
  printf("Digite dois números: \n");
  scanf("%d%*c%d%*c", &num1, &num2);
  
  printf("%d X %d = %d", num1, num2, num1 * num2);
  return 0;
}
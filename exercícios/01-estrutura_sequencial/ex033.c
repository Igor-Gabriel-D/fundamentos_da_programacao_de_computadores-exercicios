#include <stdio.h>
/* --enunciado--
Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. 
*/
int main(void){
  float peso;
  printf("Digite o seu peso (Kg):\n");
  scanf("%f%*c", &peso);

  printf("Seu peso em gramas: %.2fg", peso*1000);
  
  return 0;
}
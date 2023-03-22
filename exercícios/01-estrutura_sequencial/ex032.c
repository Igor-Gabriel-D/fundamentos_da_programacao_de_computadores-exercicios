#include <stdio.h>
/* --enunciado--
Faça um programa que receba o peso de uma pessoa, calcule e mostre: a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 
*/
int main(void){
  float peso, peso_maior, peso_menor;
  printf("Digite o seu peso (Kg):\n");
  scanf("%f%*c", &peso);
  peso_maior = peso + (peso*0.15);
  peso_menor = peso - (peso*0.20);

  printf("Seu peso:\nCaso engorde quinze porcento: %.2fKg\nCaso emagreça vinte porcento: %.2fKg", peso_maior, peso_menor);
  
  return 0;
}
#include <stdio.h>
/* --enunciado--
Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. 
*/
int main(void){
  float nota1, nota2;
  printf("Digite duas notas: \n");
  scanf("%f%*c%f%*c", &nota1, &nota2);

  printf("Média ponderada das notas: %.2f", ((nota1*2)+(nota2*3))/5 );
  return 0;
}
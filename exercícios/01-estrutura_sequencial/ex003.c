#include <stdio.h>

/* --enunciado--
Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
*/

int main(void) {
  float nota1, nota2, nota3, peso1, peso2, peso3, media;
  printf("Digite três notas e seus respectivos pesos:\n");
  scanf("%f%*c%f%*c%f%*c%f%*c%f%*c%f%*c", &nota1, &nota2, &nota3, &peso1, &peso2, &peso3);
  media = ( (nota1*peso1) + (nota2*peso2) + (nota3*peso3) )/(peso1 + peso2 + peso3);

  printf("Média ponderada das notas: %.2f",media);
  return 0;
}
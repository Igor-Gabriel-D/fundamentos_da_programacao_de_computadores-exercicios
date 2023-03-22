#include <stdio.h>

/* --enunciado--
Faça um programa que receba três notas, calcule e mostre a média aritmética
*/

int main(void) {
  float nota1, nota2, nota3, media;
  printf("Digite as três notas:\n");
  scanf("%f%*c%f%*c%f%*c", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3)/3;
  printf("Média aritmética das notas: %.2f", media);

  return 0;
}
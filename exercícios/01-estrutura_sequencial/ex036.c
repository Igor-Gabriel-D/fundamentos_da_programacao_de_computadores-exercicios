#include <stdio.h>
/* --enunciado--
Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * diagonal menor)/2
*/
int main(void){
  float diag_maior, diag_menor, area;
  printf("digite o tamanho da diagonal maior e da diagonal menor do losango:");
  scanf("%f%*c%f%*c", &diag_maior, &diag_menor);
  area = (diag_maior * diag_menor)/2;
  printf("Área do losango: %.2f cemtímetros quadrados", area);
  return 0;
}
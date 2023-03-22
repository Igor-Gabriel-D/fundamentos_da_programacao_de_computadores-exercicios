#include <stdio.h>

/* --enunciado--
Faça um programa que calcule e mostre a área de um círculo. sabe-se que: Área = pi * R**2
*/

int main(void) {
  float pi, raio, area;
  pi = 3.1415;
  printf("Digite a o comprimento (cm) do raio para calcular a area do círculo:\n");
  scanf("%f%*c",&raio);
  area = pi * (raio*raio);
  printf("A área do círculo é de %.2f cemtimetros quadrados", area);
  
  return 0;
}
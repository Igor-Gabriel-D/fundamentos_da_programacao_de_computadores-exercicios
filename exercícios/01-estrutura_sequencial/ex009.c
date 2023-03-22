#include <stdio.h>

/* --enunciado--
Faça um programa que calcule e mostre a área de um triângulo. sabe-se que: Área = (base * altura)/2. 
*/

int main(void) {
  float base, altura, area;
  printf("Digite a o comprimento (cm) da base e da altura:\n");
  scanf("%f%*c%f%*c",&base,&altura);
  area = (base*altura)/2;
  printf("A área do triângulo é de %.2f cemtimetros quadrados", area);
  
  return 0;
}
#include <stdio.h>
/* --enunciado--
Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado
*/
int main(void){
  float lado, area;
  printf("Digite o tamanho do lado do quadadro (cm):\n");
  scanf("%f%*c", &lado);
  area = lado*lado;
  printf("Área do quadrado: %.2f centímetros quadrados", area);
  
  return 0;
}
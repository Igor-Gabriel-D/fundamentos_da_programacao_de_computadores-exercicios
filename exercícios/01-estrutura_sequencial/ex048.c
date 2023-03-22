#include <stdio.h>
/* --enunciado--
Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. sabe-se que a soma dos ângulos de um triângulo é 180 graus
*/
int main(void){
  float ang1, ang2, ang3;
  printf("Digite dois ângulos de um triângulo para calcular o ângulo que falta:\n");
  scanf("%f%*c%f%*c", &ang1, &ang2);
  ang3 = 180 - (ang1+ang2);
  printf("Terceiro ângulo: %.1f", ang3);
  return 0;
}
#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta
*/
int main(void){
  float angulo, distancia, escada;
  printf("Digite a distância da parede ate a escada (m) e o ângulo da escada:\n");
  scanf("%f%*c%f%*c", &distancia,&angulo);
  escada = distancia * (cos(angulo * 3.14/180));
  printf("Tamanho da escada: %.2fm", escada);
  return 0;
}
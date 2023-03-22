#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde está a ponta da escada. calcule e mostre a medida dessa escada. Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham com medidas de ângulos em radianos
*/
int main(void){
  float ang, altura, escada;
  printf("Digite o ângulo em ralação ao chão e o tamanho da parede (m) para saber o tamanho da escada:\n");
  scanf("%f%*c%f%*c", &ang, &altura);

  escada = altura * (sin(ang * 3.14/180));
  printf("Tamanho da escada: %.2fm", escada);
  return 0;
}
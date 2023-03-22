#include <stdio.h>
#include <math.h>
/* --enunciado--
Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro. lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar
*/
int main(void){
  float chao, altura, escada;
  printf("Digite o tamanho da escada e o tamanho da parede (m) para saber a distância da parede até a escada:\n");
  scanf("%f%*c%f%*c", &escada, &altura);

  chao = sqrt( pow(escada, 2)  - pow(altura, 2) );

  printf("Distância da escada até a parede: %.1fm", chao);
  return 0;
}
#include <stdio.h>
/* --enunciado--
Faça um programa que receba o raio, calcule e mostre: a) o comprimento de uma esfera; sabe-se que c = 2 * pi *  R; b) a área de uma esfera; sabe-se que A = pi R^2; c) o volume de uma esfera; sabe-se que v = ¾ * pi R^3
*/
int main(void){
  float raio, comprimento, area, volume;
  printf("Digite o comprimento do raio(cm):\n");
  scanf("%f%*c", &raio);

  comprimento = 2*3.14*raio;
  area = 3.14*(raio*raio);
  volume = 0.75*3.14*(raio*raio*raio);

  printf("Comprimento da esfera: %.2fcm\narea da esfera: %.2f centimetros qudrados\nVolume da esfera: %.2f centimetros cúbicos", comprimento, area, volume);
  
  return 0;
}
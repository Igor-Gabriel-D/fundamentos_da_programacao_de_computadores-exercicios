#include <stdio.h>
/* --enunciado--
cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem estar em metros.
*/
int main(void){
  float degrau_altura, altura_final, num_degraus;
  printf("Digite a altura que cada degrau tem e a altura maxima que você deseja alcançar em metros:\n");
  scanf("%f%*c%f%*c", &degrau_altura, &altura_final);

  num_degraus = altura_final/degrau_altura;

  printf("Número de degraus que precisa subir: %.0f", num_degraus);
  return 0;
}
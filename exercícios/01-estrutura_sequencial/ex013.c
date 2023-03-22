#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados. a) polegadas; b) jardas; c) milhas
*/
int main(void){
  float pes, polegadas, jardas, milhas;
  printf("Digite um comprimento em Pés:\n");
  scanf("%f%*c", &pes);

  polegadas = pes * 12;
  jardas = pes / 3;
  milhas = pes / 1760;

  printf("--Conversão--\nPolegadas: %.2f\nJardas: %.2f\nMilhas: %f", polegadas, jardas, milhas);

  return 0;
}
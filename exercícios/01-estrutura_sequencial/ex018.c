#include <stdio.h>
/* --enunciado--
Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias
*/
int main(void){
  float saco_peso, racao_gato1, racao_gato2, peso_final;

  printf("Forneça o peso do saco em Kg:\n");
  scanf("%f%*c", &saco_peso);
  printf("Forneça o peso da quantidade que cada gato come por dia em gramas:\n");
  scanf("%f%*c%f%*c", &racao_gato1, &racao_gato2);

  peso_final = (saco_peso*1000) - (5*(racao_gato1+racao_gato2));

  printf("Quantidade de ração que sobrou após cinco dias: %.2fg", peso_final);
  return 0;
}
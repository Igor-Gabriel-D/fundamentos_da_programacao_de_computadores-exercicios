#include <stdio.h>
/* --enunciado--
Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono. sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono
*/
int main(void){
  int n_lados, n_diagonais;
  printf("Digite o número de lados do polígono:\n");
  scanf("%d%*c", &n_lados);
  n_diagonais = n_lados * (n_lados - 3)/2;
  printf("Número de diagonais do polígono: %d", n_diagonais);
  return 0;
}
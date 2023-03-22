#include <stdio.h>

/* --enunciado--
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
*/

int main(void) {
  float deposito, taxa_juros, rendimento;
  printf("Digite a quantidade a ser depositada e o valor da taxa de juros:\n");
  scanf("%f%*c%f%*c",&deposito,&taxa_juros);
  
  rendimento = deposito * (taxa_juros/100);
  printf("rendimento gerado a %.2f porcento é de R$%.2f\nvalor total após o rendimento: R$%.2f", taxa_juros, rendimento, (deposito+rendimento));
  
  return 0;
}
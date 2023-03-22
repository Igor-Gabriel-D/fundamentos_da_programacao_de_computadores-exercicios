#include <stdio.h>
/* --enunciado--
Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. sabe-se que cada operação bancária de retirada paga cPMF de 0,38% e o saldo inicial da conta está zerado
*/
int main(void){
  float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
  printf("digite o valor do seu salário:\n");
  scanf("%f%*c", &salario);
  printf("digite o valor de cada cheque que você deseja fazer\n:");
  scanf("%f%*c%f%*c", &cheque1, &cheque2);
  cpmf1 = cheque1 * (0.38/100);
  cpmf2 = cheque2 * (0.38/100);

  saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;

  printf("O seu saldo é de: R$%.2f", saldo);
  return 0;
}
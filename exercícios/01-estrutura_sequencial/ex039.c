#include <stdio.h>
/* --enunciado--
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: a) a idade dessa pessoa em anos; b) a idade dessa pessoa em meses; c) a idade dessa pessoa em dias; d) a idade dessa pessoa em semanas
*/
int main(void){
  int ano_nasc, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;
  printf("Digite o ano de nascimento e o ano atual:\n");
  scanf("%d%*c%d%*c", &ano_nasc, &ano_atual);
  idade_anos = ano_atual - ano_nasc;
  idade_meses = idade_anos*12;
  idade_dias = idade_anos*365;
  idade_semanas = idade_anos*52;

  printf("Idade em anos: %d\nIdade em meses: %d\nIdade em dias: %d\nIdade em semanas: %d", idade_anos, idade_meses, idade_dias, idade_semanas);
  return 0;
}
#include <stdio.h>
/* --enunciado--
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre: a) a idade dessa pessoa; b) quantos anos ela terá em 2050
*/
int main(void) {
  int ano_nascimento, ano_atual;
  printf("Digite o ano do seu nascimento e o ano atual:\n");
  scanf("%d%*c%d%*c", &ano_nascimento, &ano_atual);
  printf("Sua idade atual: %d\nSua idade no ano de 2050: %d",
         (ano_atual - ano_nascimento), (2050 - ano_nascimento));

  return 0;
}
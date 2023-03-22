#include <stdio.h>
/* --enunciado--
Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e mostre: a) a hora digitada convertida em minutos; b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; c) o total dos minutos convertidos em segundos
*/
int main(void){
  int horas, minutos;
  printf("Digite uma quantidade de horas e minutos:\n");
  scanf("%d%*c%d%*c", &horas, &minutos);

  printf("Quantidades de horas em minutos: %d\nTotal de minutos: %d\nTotal de segundos: %d", horas*60, (horas*60)+minutos, ((horas*60)+minutos)*60);
  return 0;
}
#include <stdio.h>
#include <math.h>
/* --enunciado--
Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a hora digitada apenas em minutos. lembre-se de que: *para quatro e meia, deve-se digitar 4.30; *os minutos vão de 0 a 59
*/
int main(void){
  float hora, conversao, h, m;
  printf("Digite alguma quantidade de horas para coverte-la em minutos:\n");
  scanf("%f%*c", &hora);
  h = ceil(hora) - 1;
  m = hora - h;
  conversao = (h*60) + (m*100);

  printf("Conversão para minutos: %.0fmin", conversao);
  
  return 0;
}
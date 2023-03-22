#include <stdio.h>
/* --enunciado--
Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. sabe--se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O programa deve fazer as conversões e mostrá-las
*/
int main(void){
  float real, dolar, marco, libra;
  printf("Digite uma quantidade de dinheiro em R$: ");
  scanf("%f%*c", &real);
  dolar = real/1.80;
  marco = real/2;
  libra = real/3,57;

  printf("--Conversão--\nDolar: %.2f\nMarco alemão: %.2f\nLibra esterlina: %.2f", dolar, marco, libra);
  return 0;
}
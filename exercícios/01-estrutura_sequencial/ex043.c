#include <stdio.h>
/* --enunciado--
Faça um programa que receba uma temperatura em celsius, calcule e mostre essa temperatura em Fahrenheit. sabe-se que F = 180*(c + 32)/100
*/
int main(void){
  float celcius, fahrenheit;
  printf("Digite uma temperatura em celcius:\n");
  scanf("%f%*c", &celcius);

  fahrenheit = 1.8 * celcius + 32;
  printf("Temperatura em fahrenheit: %.2f", fahrenheit);
  
  return 0;
}
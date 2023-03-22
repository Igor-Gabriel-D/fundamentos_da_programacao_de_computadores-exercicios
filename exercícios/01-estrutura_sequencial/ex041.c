#include <stdio.h>
#include <math.h>
/* --enunciado--
 Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
*/
int main(void){
  float cateto1, cateto2, hipotenusa;
  printf("Digite o comprimento de cada cateto:\n");
  scanf("%f%*c%f%*c", &cateto1, &cateto2);
  hipotenusa = sqrt( (cateto1*cateto1 + cateto2*cateto2) );
  printf("Hipotenusa: %.1f", hipotenusa);
  return 0;
}
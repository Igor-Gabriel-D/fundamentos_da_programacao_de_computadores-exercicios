#include <stdio.h>
/* --enunciado--
Faça um programa que calcule e mostre a área de um trapézio. sabe-se que: A = ((base maior + base menor) * altura)/2
*/
int main(void){
  float base_maior, base_menor, altura, area;
  printf("Digite a área maior, a base menor e a altura do trapézio (cm):\n");
  scanf("%f%*c%f%*c%f%*c", &base_maior,&base_menor,&altura);

  printf("Área do trapézio: %.2f centímetros quadrados", ((base_maior + base_menor) * altura)/2);
  
  return 0;
}
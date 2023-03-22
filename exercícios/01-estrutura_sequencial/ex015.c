#include <stdio.h>
/* --enunciado--
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre: a) o valor correspondente ao lucro do distribuidor; b) o valor correspondente aos impostos; c) o preço final do veículo. 
*/
int main(void){
  float preco_fabrica, lucro_dist, impostos, preco_final;
  printf("Digite o preço de fabrica do carro, o percentual de lucro do distribuidora e o percentual de impostos:\n");
  
  scanf("%f%*c%f%*c%f%*c", &preco_fabrica, &lucro_dist, &impostos);
  lucro_dist = preco_fabrica*(lucro_dist/100);
  impostos = preco_fabrica*(impostos/100);
  preco_final = preco_fabrica + lucro_dist + impostos;
  
  printf("Valor do lucro da distribuidora: R$%.2f\nValor dos impostos cobrados: R$%.2f\nPreço final do carro: R$%.2f", lucro_dist, impostos, preco_final);

  
  
  return 0;
}
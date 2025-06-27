#include <stdio.h>

int main(){
	
//O custo de um carro novo ao consumidor e a soma do custo de fabrica com a porcentagem do distribuidor
//e dos impostos (aplicados ao custo de fabrica). Supondo que o percentual do distribuidor seja de 28% e os
//impostos de 45%, escrever um algoritmo para ler o custo de fabrica de um carro, calcular e escrever o custo
//final ao consumidor.

float carro, imposto, distribuidor, custofinal;

printf(" Custo de fabrica do carro : ");
scanf("%f",&carro);

distribuidor = 0.28;
imposto = 0.25;

custofinal = carro + (carro * distribuidor) + (carro * imposto);

printf( "O custo final do carro e de : %2.f", custofinal);


 return 0;
}

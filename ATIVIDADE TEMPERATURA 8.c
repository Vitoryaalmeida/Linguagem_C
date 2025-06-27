#include<stdio.h>

int main(){
	
//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na formula abaixo):
 
 float f , c ;
 
 printf("Temperatura em Fahrennheit : ");
 scanf("%f",&f);
 
 c = (f-32) * 5/9;
 
 printf("Essa temperatura em Celsius e de: %2.f ",c);
	
	
return 0;
}

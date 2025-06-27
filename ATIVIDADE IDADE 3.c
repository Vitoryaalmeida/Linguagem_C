#include<stdio.h>

int main() {
	
	//Faca um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
	
	int idade, mes, dias, resultado;
	
	printf("Insira sua idade: \n");
	scanf("%d",&idade);
	
	printf("Insira seus messes: \n");
	scanf("%d",&mes);
	
    printf("Insira seus dias: \n");
	scanf("%d",&dias);
	
	resultado = idade * 365 + mes * 30 + dias;
	printf("Voce tem: %d dias.", resultado);
	
	return 0;
	
}

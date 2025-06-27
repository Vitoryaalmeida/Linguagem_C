#include<stdio.h>

int main () {
   //Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor
	int valor, resultado;
	
	printf("Insira um numero:\n");
	scanf ( "%d", &valor);
	
	resultado = valor - 1;
	
	printf ("O seu antecessor e: %d ", resultado);
			
	return 0;
}

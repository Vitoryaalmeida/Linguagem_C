#include <stdio.h>

int main (){
	
//Escreva um algoritmo para ler o salario mensal atual de um funcionario e o percentual de reajuste. Calcular
//e escrever o valor do novo salario.

	float  salario , reajuste , percentual;
	
	printf ("Salario atual do funcionario: ");
	scanf ("%f", &salario);
	
	printf ("Percentual de reajuste do salario: ");
	scanf ("%f", &reajuste);
	
	percentual = salario + (reajuste * salario / 100);
	
	printf ("O Salario reajustado e de : %.2f", percentual);
	
	
	
	return 0;
}

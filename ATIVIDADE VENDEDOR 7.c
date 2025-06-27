#include <stdio.h>

int main(){
	
//Uma revendedora de carros usados paga a seus funcionarios vendedores um salario fixo por mes, mais uma
//comissao tambem fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
//algoritmo que leia o numero de carros por ele vendidos, o valor total de suas vendas, o salario fixo e o valor
//que ele recebe por carro vendido. Calcule e escreva o salario final do vendedor
	
	float salariobase, valorcomissao, totalvendas, totalcomissao, totalsalario;
	float totalcarrosvendidos;
	
	printf("Salario base do vendedor: ");
	scanf ("%f", &salariobase);
	
	printf ("Valor da comissao por carro vendido : ");
	scanf("%f", &valorcomissao);
	
	printf("Total de carros vendidos: ");
	scanf ("%f", &totalcarrosvendidos);
	
	printf("Total de vendas: ");
	scanf ("%f", &totalvendas);
	
	totalcomissao = totalcarrosvendidos * valorcomissao ;
	totalcomissao = totalcomissao + ( totalvendas * 5)/100;
	
	totalsalario = totalcomissao + salariobase;
	
	printf("O salario final do vendedor e de: %8.2f ", totalsalario);
	
			
	return 0;
}

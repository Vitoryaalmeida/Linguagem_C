#include<stdio.h>

int main (){
	//Ler o salario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
//uma comissao de 3% sobre o total das vendas ate R$1.500,00 mais 5% sobre o que ultrapassar este valor,
//calcular e escrever o seu salario total.
	
	float salario, valordasvendas, comissao, salariototal;
	
	printf ("Digite o salario fixo do vendedor: ");
	scanf ("%f",&salario);
	
	printf("Digite o valor da venda: ");
	scanf("%f", &valordasvendas);
	
	if (valordasvendas <= 1.500){
		comissao= (valordasvendas*0.3);
		
	} else{
		comissao= 1500*0.03 + (valordasvendas - 1500)* 0.05;
	}	
	salariototal = salario + comissao;
	
	printf ("O salrio total do vendedor e : R$ %.2f\n",salariototal);
	
	return 0;
		
}


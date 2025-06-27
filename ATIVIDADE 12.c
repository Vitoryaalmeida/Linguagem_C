#include<stdio.h>

int main (){
	
//Faca um algoritmo para ler: numero da conta do cliente, saldo, debito e credito. Apos, calcular e escrever o
//saldo atual (saldo atual = saldo - debito + credito). Tambem testar se saldo atual for maior ou igual a zero
//escrever a mensagem ’Saldo Positivo’, senao escrever a mensagem ’Saldo Negativo’.
	
	int conta;
	float saldo, debito, credito, saldoatual;
	
	printf ("Digite o numero da conta do cliente: ");
	scanf("%d",&conta);
	
	printf ("Digite o saldo do cliente: ");
	scanf("%f",&saldo);
	
	printf ("Digite o debito do cliente: ");
	scanf("%f",&debito);
	
	printf ("Digite o credito do cliente: ");
	scanf("%f",&credito);
	
	saldoatual = saldo - debito + credito;
	
	printf ("Numero da conta: %.2F\n",conta);
	printf ("Saldo atual: R$%.2F\n",saldoatual);

	
	if (saldoatual >=0 ){
		printf("Saldo Positivo\n");
	} else {
		printf ("Saldo Negativo\n");
		
	}
	return 0;
}


#include<stdio.h>

int main (){
	
//Ler um valor e escrever se e positivo ou negativo (considere o valor zero como positivo)	

int valor;

printf("Digite um valor:  ");
scanf("%d", &valor);

if (valor >= 0){
	printf ("O valor e POSITIVO. \n");
	
}  else {
	printf ("O valor e NEGATIVO. \n");
}
	
	
	
	return 0;
}

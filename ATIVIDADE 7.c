#include<stdio.h>

int main (){
//Ler dois valores (considere que nao serao lidos valores iguais) e escreve-los em ordem crescente

int N1,N2;

printf("Digite o primeiro valor: ");
scanf("%d",&N1);

printf("Digite o segundo valor: ");
scanf("%d",&N2);


if(N1>N2){
printf ("Ordem crescente: %d,%d",N2,N1);
	
} else{
	printf ("Ordem crescente: %d, %d",N1,N2);
}
return 0;
}

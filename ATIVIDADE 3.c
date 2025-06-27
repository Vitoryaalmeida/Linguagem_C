#include<stdio.h>

int main (){
	//As macas custam R$1,30 cada se forem compradas menos de uma duzia, e R$1,00 se forem compradas pelo
//menos 12. Escreva um programa que leia o numero de macas compradas, calcule e escreva o custo total da
//compra

int Q;
float P;

printf(" Digite a quantidade de macas compradas: \n");
scanf("%d", &Q);

if ( Q <12){
	P = Q * 1.3;
	
} else {
	P = Q * 1;

}


printf (" O total da compra e: R$ %.2f\n", P);
	
	return 0;
}

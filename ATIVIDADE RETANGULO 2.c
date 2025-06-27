#include<stdio.h>

int main (){
	
// Escreva um algoritmo para ler as dimensoes de um retangulo (base e altura), calcular e escrever a area do retangulo
 
 int base, altura,area;
 
 printf("Insira a base do retangulo: \n");
 scanf ("%d",&base);

printf("Insira a altura do retangulo: \n");
scanf("%d", &altura);

area = base*altura;

 printf("A area do retangulo e = %d",area);

return 0;
}

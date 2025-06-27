#include<stdio.h>

int main (){
//Crie um algoritmo para, tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa,
//calcule e mostre seu peso ideal, utilizando as seguintes formulas
//para sexo masculino: peso ideal = (72, 7 × altura) - 58
// para sexo feminino: peso ideal = (62, 1 × altura) - 44, 7

char nome [20];
float altura, pesoF, pesoM;
char sexo;

printf ("Digite seu nome: ");
scanf("%s",&nome);

printf ("Digite sua altura: ");
scanf("%f",&altura);

while (getchar()!= '\n');

printf ("Digite o sexo ( M para masculino e F para feminino): ");
scanf("%c",&sexo);

pesoF = (62.1 * altura) - 44.7;
pesoM = (71.2 * altura) - 58;

if (sexo== 'M'){
	printf ("Nome: %s\n Altura: %.2f\n Peso ideal: %.1f", nome, altura, pesoM);
	
} else if (sexo=='F'){
	printf ("Nome: %s\n Altura: %.2f\n Peso ideal: %.1f", nome, altura, pesoF);
}

return 0;	
}



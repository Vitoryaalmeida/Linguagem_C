#include<stdio.h>

int main (){
	
//faca um algoritmo que leia tres notas de um aluno, calcule e escreva a media final deste aluno. Considerar
//que a media e ponderada e que o peso das notas e 2, 3 e 5. Formula para o calculo da media final e:

float nota1, nota2, nota3, media;

printf("Digite a primeira nota: ");
scanf("%f", &nota1);
	
printf("Digite a segunda nota: ");
scanf("%f", &nota2);
	
printf("Digite a terceira nota: ");
scanf("%f", &nota3);
	
	media = (2 * nota1 + 3 * nota2 + 5 * nota3 ) /10;
	
printf("A media final do aluno com os pesos e : %2.f ", media);
	
		
return 0;
}

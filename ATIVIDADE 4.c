#include<stdio.h>

int main (){
	
	
//Ler as notas da 1ª. e 2ª. avaliacoes de um aluno. Calcular a media aritmetica simples e escrever uma
//mensagem que diga se o aluno foi ou nao aprovado (considerar que nota igual ou maior que 7 o aluno e
//aprovado). Escrever tambem a media calculada.

float nota1, nota2, media;

printf("Digite a primeira nota : ");
scanf("%f",&nota1);

printf("Digite a segunda nota : ");
scanf("%f",&nota2);

media= (nota1+nota2)/2;

if(media<=6) {
	printf("Reprovado\nMedia:%2.f", media);
		
} else{
	printf("Aprovado\nMedia:%2.f", media);
}

return 0;








}

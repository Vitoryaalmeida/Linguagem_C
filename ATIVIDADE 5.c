#include<stdio.h>

int main (){
	
	//Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela podera ou
//nao votar este ano (nao e necessario considerar o mes em que a pessoa nasceu).

int anonascimento;
printf("Digite o ano do nascimento: ");
scanf("%d",&anonascimento);

//2024
// 16 ANOS PODE VOTAR MAS NAO E OBRIGATORIO

if (2024-anonascimento<=15){
	printf("NAO PODE VOTAR ESSE ANO");
} else{
 printf ("PODE VOTAR ESSE ANO");
}
return 0;

}


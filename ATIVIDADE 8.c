#include<stdio.h>

int main (){
//Ler a hora de inicio e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os minutos)
//e calcule a duracao do jogo em horas, sabendo-se que o tempo maximo de duracao do jogo e de 24 horas e
//que o jogo pode iniciar em um dia e terminar no dia seguinte.

int inicio, fim, final;

printf ("Digite a hora de inicio do jogo: ");
scanf("%d",&inicio);

printf ("Digite a hora do fim do jogo: ");
scanf("%d",&fim);

if (inicio < fim){
	final = fim- inicio;
} else {
	final = (24-inicio) + fim;
}
printf ("O jogo durou %d horas.\n", final);
return 0;
}

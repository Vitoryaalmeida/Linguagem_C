#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

//algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a media da turma e contar
//quantos alunos obtiveram nota acima desta media calculada. Escrever a media da turma e o resultado da
//contagem.

int main(){
	setlocale(LC_ALL,"Portuguese");
int i, quantidade_acima_media = 0;
float notas [20], media = 0, nota1, nota2;
srand ((unsigned) time (NULL));
	
for ( i = 0; i < 20; i++){
	nota1 = rand() % 101 / 10.0;
	nota2 = rand() % 101 / 10.0;
	notas[i] = nota1 > nota2 ? nota1 : nota2;
	printf("Nota do estudante %d: %.1f\n", i + 1, notas [i]);
	media += notas [i];
	
}
	media /= 20;
	printf("Média: %2f\n", media);
	
for (i = 0; i < 20; i++){
	if ( notas[i] > media){
	quantidade_acima_media++;
	}
}
	
	printf("Quantidade de estudantes acima da média: %d", quantidade_acima_media);
		
	return 0;
}


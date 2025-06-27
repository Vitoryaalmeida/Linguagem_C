#include <stdio.h>

int main(){
	
//Escreva um algoritmo para ler o numero total de eleitores de um municipio, o numero de votos brancos, nulos
//e validos. Calcular e escrever o percentual que cada um representa em relacao ao total de eleitores.

	
float branco, nulo, valido, total;

printf(" Numero total de eleitores: \n");
scanf("%d",&total);

printf(" Numero de votos brancos: \n");
scanf("%d",&branco);
	
printf(" Numero de votos nulos: \n");
scanf("%d",&nulo);
	
printf(" Numero de votos validos: \n");
scanf("%d",&valido);
	
	
	//resultado
	
	printf("\n Percentual Votos brancos: %.2f%%\n  ", (float) branco / total * 100 );
	printf("\n Percentual Votos nulos: %.2f%%\n  ", (float) nulo / total * 100 );
	printf("\n Percentual Votos validos: %.2f%%\n  ", (float) valido / total * 100 );

		return 0; 
	}	
	

#include <stdio.h>
#include<locale.h>

//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endere¸co de
//cada posi¸c˜ao dessa matriz.
int main() {
	int i, j;
	setlocale(LC_ALL,"Portuguese");
    float matriz[3][3];  

    
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Endereço do elemento matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}

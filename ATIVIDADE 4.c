#include <stdio.h>
#include<locale.h>

//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endere¸co de cada
//posi¸c˜ao desse array.


int main() {
	setlocale(LC_ALL,"Portuguese");
	int i;
    float arr[10];  

   for ( i = 0; i < 10; i++) {
        printf("Endereço do elemento arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}

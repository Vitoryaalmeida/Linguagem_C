#include <stdio.h>
#include<locale.h>

//Escreva uma fun¸c˜ao que dado um n´umero real passado como parˆametro, retorne a parte inteira e a parte
//fracion´aria deste n´umero. Escreva um programa que chama esta fun¸c˜ao.
//Prot´otipo:
//void frac(float num, int* inteiro, float* frac);


void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int) num;            
    *frac = num - *inteiro;          
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    float numero, parte_fracionaria;
    int parte_inteira;

    
    printf("Digite um número real: ");
    scanf("%f", &numero);

    
    frac(numero, &parte_inteira, &parte_fracionaria);

    
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.3f\n", parte_fracionaria);

    return 0;
}

#include <stdio.h>
#include<locale.h>

int main() {
    //Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
//as vari´aveis aos ponteiros (use &). Modifique os valores de cada vari´avel usando os ponteiros. Imprima os
//valores das vari´aveis antes e ap´os a modifica¸c˜ao.
   setlocale(LC_ALL,"Portuguese");
    int inteiro = 5;
    float real = 3.14;
    char caractere = 'A';

    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;

    printf("Antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *p_inteiro = 10;
    *p_real = 6.28;
    *p_caractere = 'B';
    
    printf("\nApós a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}

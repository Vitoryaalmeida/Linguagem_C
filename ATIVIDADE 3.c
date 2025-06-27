#include <stdio.h>
#include<locale.h>

// Fa¸ca um programa que leia 2 valores inteiros e chame uma fun¸c˜ao que receba estas 2 vari´aveis e troque o seu
//conte´udo, ou seja, esta fun¸c˜ao ´e chamada passando duas vari´aveis A e B por exemplo e, ap´os a execu¸c˜ao da
//fun¸c˜ao, A conter´a o valor de B e B ter´a o valor de A. Exiba os valores na fun¸c˜ao main.
void troca(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int A, B;
   	setlocale(LC_ALL,"Portuguese");

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    
    printf("Antes da troca: A = %d, B = %d\n", A, B);
   
    troca(&A, &B);
    
    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}

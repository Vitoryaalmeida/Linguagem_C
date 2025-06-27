#include <stdio.h>
#include<locale.h>

int main() {
	//Escreva um programa que contenha duas vari´aveis inteiras. Compare seus endere¸cos e exiba o maior endere¸co.
	setlocale(LC_ALL,"Portuguese");
    int a = 30;
    int b = 20;

    
    int *p_a = &a;
    int *p_b = &b;

    
    if (&a > &b) {
        printf("O maior endereço é: %p (variável 'a')\n",(void*)*p_a);
    } else if (&a < &b) {
        printf("O maior endereço é: %p (variável 'b')\n", (void*)*p_b);
    } 
      
    

    return 0;
}

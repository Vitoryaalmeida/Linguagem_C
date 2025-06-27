#include <stdio.h>
#include<locale.h>

//Elabore uma fun¸c˜ao que receba duas strings como parˆametros e verifique se a segunda string ocorre dentro
//da primeira. Use aritm´etica de ponteiros para acessar os caracteres das strings. N˜ao utilize string.h.
int ocorre(char *str1, char *str2) {
    char *p1, *p2, *p_inicio;

    
    for (p1 = str1; *p1 != '\0'; p1++) {
        p_inicio = p1;
        p2 = str2;

       
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }

      
        if (*p2 == '\0') {
            return 1;  
        }

        
        p1 = p_inicio;
    }

    return 0;  
}

int main() {
    char str1[100], str2[100];
	setlocale(LC_ALL,"Portuguese");
    printf("Digite a primeira string: ");
    scanf("%99s", str1);
    printf("Digite a segunda string: ");
    scanf("%99s", str2);

    
    if (ocorre(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NÃO ocorre dentro da primeira.\n");
    }

    return 0;
}

//QUESTÃO 7//
#include <stdio.h>

int main() {
    float nota;
    int frequencia;

    // Entrada de dados do estudante
    printf("Digite a nota do estudante (0 a 10): ");
    scanf("%f", &nota);
    printf("Digite a frequencia do estudante (0 a 100): ");
    scanf("%d", &frequencia);

    // Avaliação com uma única condição if
    if (nota >= 7 && frequencia >= 75) {
        printf("Estudante aprovado!\n");
    } else {
        printf("Estudante reprovado.\n");
    }

    return 0;
}


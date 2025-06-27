#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
	setlocale(LC_ALL,"Portuguese");
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t)); // Alocação dinâmica de memória
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1; // Termina o programa em caso de erro
    }

    // Entrada dos dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(novo_aluno->nome, sizeof(novo_aluno->nome), stdin);
    novo_aluno->nome[strcspn(novo_aluno->nome, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    // Exibição dos dados do aluno
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", novo_aluno->nome);
    printf("Faltas: %d\n", novo_aluno->faltas);
    printf("Nota: %.2f\n", novo_aluno->nota);

    // Verificação de aprovação
    if (novo_aluno->faltas > 25) {
        printf("Resultado: Reprovado por faltas.\n");
    } else if (novo_aluno->nota < 6.0) {
        printf("Resultado: Reprovado por nota.\n");
    } else {
        printf("Resultado: Aprovado!\n");
    }

    // Liberação da memória alocada
    free(novo_aluno);

    return 0;
}


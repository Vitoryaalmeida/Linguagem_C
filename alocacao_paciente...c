#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Defini a estrutura e declaração da função como pedido no header//
#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct {
    char nome[100];
    short idade;
    int leito;
} paciente_t;

void alocacao_paciente(paciente_t *paciente, char *nome, short idade);

#endif

// Implementa a função alocacao_paciente//
void alocacao_paciente(paciente_t *paciente, char *nome, short idade) {
    // Copia o nome para a estrutura do paciente, garantindo o término da string//
    strncpy(paciente->nome, nome, sizeof(paciente->nome) - 1);
    paciente->nome[sizeof(paciente->nome) - 1] = '\0';
    
    // Atribui a idade do paciente//
    paciente->idade = idade;

    // Gera um número de leito aleatório no formato AndarLeito - (Ex: 101, 202, ... 510)//
    int andar = (rand() % 5) + 1;           // cria um número entre 1 e 5 para o andar//
    int leito = (rand() % 10) + 1;          // cria um número entre 1 e 10 para o leito//
    paciente->leito = andar * 100 + leito;  // Formato final do leito//

    printf("Paciente alocado: %s, Idade: %d, Leito: %d\n", paciente->nome, paciente->idade, paciente->leito);
}

int main() {
    // Inicializar o gerador de números aleatórios//
    srand(time(NULL));

    // Criar uma instância de paciente e alocar dados//
    paciente_t paciente;
    alocacao_paciente(&paciente, "Pedro Lucas", 60);

    return 0;
}


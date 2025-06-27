#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Funções declaradas no header
float calcularIMC(float peso, float altura);
void obterClassificacaoIMC(float imc, int idade, char sexo);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;
    int idade;
    char sexo;

    printf("=== Cálculo do IMC Infantil ===\n");

    // Entrada de dados
    printf("Informe o peso da criança (em kg): ");
    scanf("%f", &peso);

    printf("Informe a altura da criança (em metros): ");
    scanf("%f", &altura);

    printf("Informe a idade da criança (em anos): ");
    scanf("%d", &idade);

    printf("Informe o sexo da criança (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    // Cálculo do IMC
    imc = calcularIMC(peso, altura);

    // Exibição do resultado do IMC
    printf("\nO IMC da criança é: %.2f\n", imc);

    // Classificação do IMC baseado na idade e sexo
    obterClassificacaoIMC(imc, idade, sexo);

    return 0;
}

// Função para calcular o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para obter a classificação do IMC
void obterClassificacaoIMC(float imc, int idade, char sexo) {
    if (idade < 2 || idade > 20) {
        printf("Idade fora da faixa recomendada (2 a 20 anos).\n");
        return;
    }

    printf("Classificação do IMC para idade e sexo:\n");

    // Classificação baseada no sexo
    if (sexo == 'M' || sexo == 'm') {
        if (idade >= 2 && idade <= 5) {
            if (imc < 15.0) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 15.0 && imc <= 17.4) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        } else if (idade >= 6 && idade <= 10) {
            if (imc < 16.0) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 16.0 && imc <= 19.0) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        } else {
            if (imc < 18.0) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 18.0 && imc <= 24.0) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        }
    } else if (sexo == 'F' || sexo == 'f') {
        if (idade >= 2 && idade <= 5) {
            if (imc < 14.5) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 14.5 && imc <= 17.0) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        } else if (idade >= 6 && idade <= 10) {
            if (imc < 15.5) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 15.5 && imc <= 18.5) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        } else {
            if (imc < 17.5) {
                printf("Abaixo do peso.\n");
            } else if (imc >= 17.5 && imc <= 23.5) {
                printf("Peso adequado.\n");
            } else {
                printf("Sobrepeso ou obesidade.\n");
            }
        }
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
    }
}

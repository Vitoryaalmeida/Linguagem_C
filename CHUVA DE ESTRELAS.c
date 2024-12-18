#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Função para posicionar o cursor no console
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para gerar uma explosão de fogos de artifício
void firework(int x, int y) {
    char symbols[] = "*+x.";
    int i;
    printf("\033[1;34m"); // Define a cor para azul
   

    for (i = 0; i < 10; i++) {
        gotoxy(x + rand() % 10 - 5, y + rand() % 5 - 2);
        printf("%c", symbols[rand() % 4]);
        Sleep(100); // Pequena pausa para criar efeito
    }
    Sleep(200);
}

// Função principal
int main() {
    int i;
    srand(time(NULL));
    system("cls");

    // Simula os fogos de artifício
    for (i = 0; i < 20; i++) {
        int x = rand() % 70 + 5; // Posição horizontal aleatória
        int y = rand() % 10 + 2; // Posição vertical aleatória
        firework(x, y);
    }

    // Escreve "I LOVE YOU" no centro da tela
    gotoxy(35, 12);
    printf("\033[1;31m");
    printf("I LOVE YOU <3");

    gotoxy(0, 20); // Move o cursor para evitar sobreposição
    return 0;
}

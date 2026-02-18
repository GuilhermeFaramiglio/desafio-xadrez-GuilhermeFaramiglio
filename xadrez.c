#include <stdio.h>

// Função recursiva para movimentação da Torre
// A Torre se move para a direita
void moveTorre(int casa, int casasTotal) {
    if (casa > casasTotal) {
        return;
    }
    printf("Direita\n");
    moveTorre(casa + 1, casasTotal);
}

// Função recursiva para movimentação da Rainha
// A Rainha se move para a esquerda
void moveRainha(int casa, int casasTotal) {
    if (casa > casasTotal) {
        return;
    }
    printf("Esquerda\n");
    moveRainha(casa + 1, casasTotal);
}

// Função recursiva para movimentação do Bispo
// O Bispo se move na diagonal (cima + direita)
void moveBispo(int casa, int casasTotal) {
    if (casa > casasTotal) {
        return;
    }
    printf("Cima + Direita\n");
    // printf("Direita\n");
    moveBispo(casa + 1, casasTotal);
}

// Função com loops aninhados para movimentação do Bispo
// Loop externo controla o movimento vertical
// Loop interno controla o movimento horizontal
void moveBispoLoops(int linhas, int colunas) {
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= colunas; j++) {
            printf("Cima + Direita\n");
            // printf("Direita\n");
        }
    }
}

// Função com loops complexos para movimentação do Cavalo
// Movimento em L: duas casas para cima e uma para a direita
void moveCavalo() {
    int movimentos = 2;
    int movimentosHorizontais = 1;
    
    for (int i = 1; i <= movimentos; i++) {
        printf("Cima\n");
    }
    
    for (int j = 1; j <= movimentosHorizontais; j++) {
        if (j == movimentosHorizontais) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    int casasTotal = 5;
    int casasTotalRainha = 8;
    int linhas = 2;
    int colunas = 3;

    // Movimentação da Torre (recursividade)
    printf("Movimentação da Torre:\n");
    moveTorre(1, casasTotal);
    printf("\n");

    // Movimentação do Bispo (recursividade)
    printf("Movimentação do Bispo (Recursividade):\n");
    moveBispo(1, casasTotal);
    printf("\n");

    // Movimentação do Bispo (loops aninhados)
    printf("Movimentação do Bispo (Loops Aninhados):\n");
    moveBispoLoops(linhas, colunas);
    printf("\n");

    // Movimentação da Rainha (recursividade)
    printf("Movimentação da Rainha:\n");
    moveRainha(1, casasTotalRainha);
    printf("\n");

    // Movimentação do Cavalo (loops complexos)
    printf("Movimentação do Cavalo:\n");
    moveCavalo();
    printf("\n");

    return 0;
}

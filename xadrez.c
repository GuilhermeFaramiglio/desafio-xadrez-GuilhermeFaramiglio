#include <stdio.h>

int main() {
    int torre;
    int bispo = 1;
    int rainha = 1;

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita: Casa %d\n", torre);
    }
    printf("\n");

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    while (bispo <= 5)
    {
        printf("Cima + Direita: Casa %d\n", bispo);
        bispo++;
    }
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    do
    {
        printf("Esquerda: Casa %d\n", rainha);
        rainha++;
    } while (rainha <= 8);
    printf("\n");

    // Movimentação do Cavalo (estruturas for e while - loop aninhado)
    // Duas casas para baixo e uma para a esquerda
    printf("Movimentação do Cavalo:\n");
    int i = 1;
    while (i <= 2) {
        for (int j = 1; j <= 1; j++) {
            printf("Baixo: Casa %d, Esquerda: Casa %d\n", i, j);
        }
        i++;
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

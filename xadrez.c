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
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

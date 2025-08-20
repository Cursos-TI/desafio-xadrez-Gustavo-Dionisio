#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula os movimentos básicos das peças de xadrez:
// Torre, Bispo, Rainha e Cavalo.

int main() {
    // Quantidade de casas para movimentar
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    int movimentosCavalo = 3; // Número de movimentos em "L"

    // -------------------
    // Movimento da TORRE
    // -------------------
    // Torre se move em linha reta. Vamos simular 5 casas para a direita usando for.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------
    // Movimento do BISPO
    // -------------------
    // Bispo se move na diagonal. Vamos simular 5 casas na diagonal para cima e à direita usando while.
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // -------------------
    // Movimento da RAINHA
    // -------------------
    // Rainha se move em todas as direções. Vamos simular 8 casas para a esquerda usando do-while.
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    printf("\n");

    // -------------------
    // Movimento do CAVALO
    // -------------------
    // Cavalo se move em "L": 2 casas para baixo, 1 casa para a esquerda
    // Utilizando for (obrigatório) e while (aninhado)
    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentosCavalo; m++) {
        int passos = 0;

        // 2 casas para baixo
        while (passos < 2) {
            printf("Cima\n");
            passos++;
        }

        // 1 casa para a esquerda
        printf("Esquerda\n");

        printf("--- Fim do movimento em L #%d ---\n", m + 1);
    }

    return 0;
}



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   


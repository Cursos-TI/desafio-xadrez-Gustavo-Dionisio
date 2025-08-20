

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



#include <stdio.h>

// ----------------------
// Funções Recursivas
// ----------------------

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int linhas, int colunas) {
    if (linhas == 0 || colunas == 0) return;

    // Loop aninhado: externo = vertical (linhas), interno = horizontal (colunas)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva reduzindo o tamanho da "diagonal"
    moverBispoRecursivo(linhas - 1, colunas - 1);
}

// ----------------------
// Movimento do Cavalo
// ----------------------

void moverCavalo(int movimentosMaximos) {
    printf("Movimento do Cavalo:\n");

    int movimentosRealizados = 0;

    for (int i = 0; i < 5; i++) { // Controle vertical (simulando movimento para cima)
        for (int j = 0; j < 5; j++) { // Controle horizontal (para direita)
            
            // Simular condição do "L" (2 para cima, 1 para direita)
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosRealizados++;
                printf("--- Fim do movimento em L #%d ---\n", movimentosRealizados);
            }

            if (movimentosRealizados >= movimentosMaximos) {
                break;
            }
        }

        if (movimentosRealizados >= movimentosMaximos) {
            break;
        }
    }

    printf("\n");
}

// ----------------------
// Função Principal
// ----------------------

int main() {
    // Quantidade de casas ou movimentos para cada peça
    int casasTorre = 5;
    int casasRainha = 8;
    int linhasBispo = 3;
    int colunasBispo = 3;
    int movimentosCavalo = 2;

    // -------------------
    // Movimento da TORRE
    // -------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------
    // Movimento do BISPO
    // -------------------
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(linhasBispo, colunasBispo);
    printf("\n");

    // -------------------
    // Movimento da RAINHA
    // -------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------
    // Movimento do CAVALO
    // -------------------
    moverCavalo(movimentosCavalo);

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

   


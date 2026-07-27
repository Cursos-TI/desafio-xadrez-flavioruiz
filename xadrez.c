#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void moverPeca(int casas, char *direcao) {
    if (casas > 0) {
        printf(" %s\n", direcao);
        moverPeca(casas - 1, direcao);
    }
}

int main() {
    // Contador genérico para os bucles while e do-while
    int contador = 1;

    // Numero de casas para movimentação das peças
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    // O numero de movimentos do Cavalo é fixo
    const int movimentoCavalo = 3;
    const int movimentoCavaloVertical = 2;
    const int movimentoCavaloHorizontal = 1;

    // Movimentar o Bispo
    printf("Movimentando o bispo %d casa%s: \n", movimentoBispo, (movimentoBispo > 1 ? "s" : ""));
    for (int v = 1; v <= movimentoBispo; v++) {
        moverPeca(1, "Cima Direita");
    }

    // Espaçador
    printf("\n");

    // Movimentar a Torre
    printf("Movimentando a torre %d casa%s: \n", movimentoTorre, (movimentoTorre > 1 ? "s" : ""));
    moverPeca(movimentoTorre, "Direita");

    // Espaçador
    printf("\n");

    // Movimentar a Rainha - Estrutura do-while
    printf("Movimentando a rainha %d casa%s: \n", movimentoRainha, (movimentoRainha > 1 ? "s" : ""));
    moverPeca(movimentoRainha, "Esquerda");

    // Espaçador
    printf("\n");

    // Movimentar o Cavalo
    printf("Movimentando o cavalo\n");
    for (int v = 1, h = 0; (v + h ) <= movimentoCavalo; v++) {
        if (v <= movimentoCavaloVertical) {
            // Mover na vertical primeiro
            moverPeca(1, "Cima");
        } else {
            // Apos duas movimentações na vertical, mover na horizontal
            moverPeca(1, "Direita");
            // Incermentar contador horizontal
            h++;
        }
    }

    return 0;
}

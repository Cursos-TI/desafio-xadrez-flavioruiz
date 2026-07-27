#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int contador = 1;
    int casas_bispo, casas_torre, casas_rainha;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    casas_bispo = 5;
    printf("Movimentando o bispo %d casas: \n", casas_bispo);
    while (contador <= casas_bispo ) {
        printf("  Cima direita\n");
        contador++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    casas_torre = 5;
    printf("Movimentando a torre %d casas: \n", casas_torre);
    for (int i = 0; i < casas_torre; i++) {
        printf("  Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    contador = 1;
    casas_rainha = 8;
    printf("Movimentando a rainha %d casas: \n", casas_rainha);
    do {
        printf("  Esquerda\n");
        contador++;
    } while (contador <= casas_rainha);

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

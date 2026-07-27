#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // contador genérico para os bucles while e do-while
    int contador = 1;
    // numero de casas para movimentação das peças
    int casas_bispo, casas_torre, casas_rainha;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Solicitar ao usuario o número de casas para movimentar o Bispo. Valor deve ser maior que 0.
    printf("Ingrese o número de casas para movimentação do Bispo: ");
    while ( casas_bispo < 1 ) {
        scanf("%d", &casas_bispo);
        if (casas_bispo < 1) {
            printf("Número invalido, tente novamente.\n");
            printf("Ingrese o número de casas para movimentação do Bispo: ");
        }
    }
    // Movimentar o Bispo - Estrutura while
    printf("Movimentando o bispo %d casa%s: \n", casas_bispo, (casas_bispo > 1 ? "s" : ""));
    while (contador <= casas_bispo ) {
        printf("  Cima direita\n");
        contador++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Solicitar ao usuario o número de casas para movimentar a Torre. Valor deve ser maior que 0.
    do {
        printf("Ingrese o número de casas para movimentação da Torre: ");
        scanf("%d", &casas_torre);
        if (casas_torre < 1) {
            printf("Número invalido, tente novamente.\n");
        }
    } while ( casas_torre < 1 );
    // Movimentar a Torre - Estrutura for
    printf("Movimentando a torre %d casa%s: \n", casas_torre, (casas_torre > 1 ? "s" : ""));
    for (int i = 0; i < casas_torre; i++) {
        printf("  Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    contador = 1;
    // Solicitar ao usuario o número de casas para movimentar a Rainha. Valor deve ser maior que 0.
    do {
        printf("Ingrese o número de casas para movimentação da Rainha: ");
        scanf("%d", &casas_rainha);
        if (casas_rainha < 1) {
            printf("Número invalido, tente novamente.\n");
        }
    } while ( casas_rainha < 1 );
    // Movimentar a Rainha - Estrutura do-while
    printf("Movimentando a rainha %d casa%s: \n", casas_rainha, (casas_rainha > 1 ? "s" : ""));
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

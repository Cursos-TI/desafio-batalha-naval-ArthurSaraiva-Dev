#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_TABULEIRO 10 // define o tamanho do tabuleiro em 10
#define TAMANHO_NAVIO 3 // define o tamanho do navio em 3

void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

void NavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int j = coluna; j < coluna + TAMANHO_NAVIO; j++) {
        if (j < TAMANHO_TABULEIRO) {
            tabuleiro[linha][j] = 3; // 3 representa parte de um navio
        }
    }
}

void NavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        if (i < TAMANHO_TABULEIRO) {
            tabuleiro[i][coluna] = 3; // 3 representa parte de um navio
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro do Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.



int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    printf("*** TABULEIRO BATALHA NAVAL ***\n");
    
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializa o tabuleiro com água (0)
    inicializarTabuleiro(tabuleiro);
    
    // Posiciona um navio horizontalmente na linha 2, começando na coluna 3
    NavioHorizontal(tabuleiro, 2, 3);
    
    // Posiciona um navio verticalmente na coluna 7, começando na linha 5
    NavioVertical(tabuleiro, 5, 7);
    
    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);
    
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

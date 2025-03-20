#include <stdio.h>

int main() {
    // Definindo a quantidade de casas a serem movidas
    int casasParaBaixo = 2;  // O Cavalo se move 2 casas para baixo
    int casasParaEsquerda = 1;  // O Cavalo se move 1 casa para a esquerda
    
    // Início da movimentação do Cavalo
    printf("Movimento do Cavalo:\n");

    // Primeira parte do movimento: duas casas para baixo
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");  // Movendo uma casa para baixo
    }

    // Segunda parte do movimento: uma casa para a esquerda
    int j = 0;
    while (j < casasParaEsquerda) {
        printf("Esquerda\n");  // Movendo uma casa para a esquerda
        j++;  // Incrementa para garantir que o loop pare após mover uma casa
    }

    // Fim da movimentação do Cavalo
    return 0;
}

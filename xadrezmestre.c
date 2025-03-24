#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, int direcao) {
    if (casas == 0) return;
    switch(direcao) {
        case 1: // Cima
            printf("Cima\n");
            moverTorre(casas - 1, direcao);
            break;
        case 2: // Baixo
            printf("Baixo\n");
            moverTorre(casas - 1, direcao);
            break;
        case 3: // Esquerda
            printf("Esquerda\n");
            moverTorre(casas - 1, direcao);
            break;
        case 4: // Direita
            printf("Direita\n");
            moverTorre(casas - 1, direcao);
            break;
    }
}

// Função recursiva para mover o Bispo com loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais, int direcaoVertical, int direcaoHorizontal) {
    if (casasVerticais == 0) return;
    // Loop para movimento vertical
    for (int i = 0; i < casasVerticais; i++) {
        // Loop para movimento horizontal
        for (int j = 0; j < casasHorizontais; j++) {
            switch(direcaoVertical) {
                case 1: // Cima
                    printf("Cima\n");
                    break;
                case 2: // Baixo
                    printf("Baixo\n");
                    break;
            }
            switch(direcaoHorizontal) {
                case 3: // Esquerda
                    printf("Esquerda\n");
                    break;
                case 4: // Direita
                    printf("Direita\n");
                    break;
            }
        }
    }
    moverBispo(casasVerticais - 1, casasHorizontais - 1, direcaoVertical, direcaoHorizontal);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, int direcaoVertical, int direcaoHorizontal) {
    if (casas == 0) return;
    if (direcaoVertical == 1) printf("Cima\n");
    else if (direcaoVertical == 2) printf("Baixo\n");
    
    if (direcaoHorizontal == 3) printf("Esquerda\n");
    else if (direcaoHorizontal == 4) printf("Direita\n");
    
    moverRainha(casas - 1, direcaoVertical, direcaoHorizontal);
}

// Função para o movimento do Cavalo utilizando loops aninhados
void moverCavalo(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            if (i == 0 && j == 0) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

int main() {
    int casasTorre = 5; // Número de casas a mover a Torre
    int casasBispo = 3; // Número de casas a mover o Bispo
    int casasRainha = 4; // Número de casas a mover a Rainha
    int casasCavalo = 2; // Número de casas a mover o Cavalo

    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1); // Cima
    printf("\n");

    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo, 1, 4); // Cima e Direita
    printf("\n");

    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha, 1, 4); // Cima e Direita
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(casasCavalo, casasCavalo); // Movimento em "L"
    printf("\n");

    return 0;
}

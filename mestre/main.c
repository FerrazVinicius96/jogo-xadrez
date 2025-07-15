#include <stdio.h>

// Função recursiva para movimentos simples (Rainha e Torre)
int movimentacao_basica(int mov, char *direcao){
    if (mov == 0){
        return 1;
    } else{
        printf("%s\n", direcao);
        return movimentacao_basica(mov - 1, direcao);
    }
}

// Função do Bispo: recursiva + loop aninhado
void movimentacao_diagonal(int mov, char *direcao1, char *direcao2){
    if (mov == 0){
        return;
    } else {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("%s, %s\n", direcao1, direcao2);
            }
        }
        movimentacao_diagonal(mov - 1, direcao1, direcao2);
    }
}

// Movimento em L com múltiplas condições
void movimentacao_cavalo(char *direcao1, char *direcao2){
    for (int i = 0; i < 2; i++) {
        if (i == 1) {
            printf("%s\n", direcao1);
            for (int j = 0; j < 2; j++) {
                if (j == 0) continue;
                printf("%s\n", direcao2);
                break;
            }
        } else {
            printf("%s\n", direcao1);
        }
    }
}

int main(void){
    int escolha;
    int torre = 5, bispo = 5, rainha = 8;

    // Direções disponíveis
    char *direcao[] = {
        "Direita",   // [0]
        "Esquerda",  // [1]
        "Cima",      // [2]
        "Baixo"      // [3]
    };

    while(1){
        printf("\nEscolha uma peça:\n");
        printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\nEscolha: ");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("Você escolheu: Torre\n");
                movimentacao_basica(torre, direcao[0]);  // Direita
                break;
            case 2:
                printf("Você escolheu: Bispo\n");
                movimentacao_diagonal(bispo, direcao[2], direcao[0]);  // Cima + Direita
                break;
            case 3:
                printf("Você escolheu: Rainha\n");
                movimentacao_basica(rainha, direcao[1]);  // Esquerda
                break;
            case 4:
                printf("Você escolheu: Cavalo\n");
                movimentacao_cavalo(direcao[2], direcao[0]);  // Cima, Cima, Direita
                break;
            default:
                printf("Escolha inválida! Digite um número entre 1 e 4.\n");
                break;
        }
    }

    return 0;
}
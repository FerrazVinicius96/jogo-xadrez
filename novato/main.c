/* 
Programa que utiliza estruturas de repetição para movimento das peças Torre, Bispo e Rainha no xadrez.
*/

#include <stdio.h>
#define TAM_DIRECAO 10

int main(void){
    // Cada peça foi declara como uma variável contendo o número de movimentos que irá realizar;
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    // A inicialização da variável de controle foi omitida, pois já foi realizado anteriormente. 
    for (; torre > 0; torre--){
        printf("Torre -> Direita\n");\
    }
    // Nessa estrutura, primeiro o statement é executado para posteriormente subtrair 1 da variável.
    while (bispo > 0){
        printf("Bispo -> Cima, Direita\n");
        --bispo;
    }
    // Nessa outra estrutura, o inverso da estrutura anterior ocorre, ou seja, primeiro subtrai-se 1 da variável.
    do{
        rainha--;
        printf("Rainha -> Esquerda\n");
    } while(rainha > 0);

    return 0;
}
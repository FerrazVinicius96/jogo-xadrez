#include <stdio.h> 

int main(void){
    int escolha;
    int torre = 5, bispo = 5, rainha = 8;

    while(1){
        int i=1;
        printf("1-Torre;\n2-Bispo;\n3-Rainha;\n4-Cavalo;\nEscolha: ");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("Você escolheu: Torre\n");
                for(;i<=torre;i++){
                    printf("Direita\n");
                }
                break;
            case 2: 
                printf("Você escolheu: Bispo\n");
                do{
                    printf("Cima, Direita\n");
                    i++;

                } while(i<=bispo);
                break;
            case 3: 
                printf("Você escolheu: Rainha\n");
                while(i<=rainha){
                    printf("Direita\n");
                    i++;
                }
                break;
            case 4:
                printf("Você escolheu: Cavalo\n");
                for(;i<=2;i++){
                    printf("Baixo\n");
                    if(i==2){
                        int j = 1;
                        while (j<=1){
                            printf("Esquerda\n");
                            j++;
                        }
                    }
                }
                break;
            default:
                printf("Escolha entre 1-3\n");
            break;
        }
    }

    return 0;
}
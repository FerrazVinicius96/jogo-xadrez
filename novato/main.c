#include <stdio.h> 

int main(void){
    int escolha;
    int torre = 5, bispo = 5, rainha = 8;

    while(1){
        int i=1;
        printf("1-Torre;\n2-Bispo;\n3-Rainha\nEscolha: ");
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
            default:
                printf("Escolha entre 1-3\n");
            break;
        }
    }

    return 0;
}
#include "funcao.h"

int main(){

    int op, mode;

    char tab[3][3];

   resetMatriz(tab);

int j = 0;
int pl = 0;
    for( ; ; ){
        
        printf("\nPressione:\n\n(0) Para sair\n(1) Começar um novo jogo\n(2) Continuar um jogo salvo\n(3) Voltar para o jogo em andamento\n(4) Exibir o ranking atual\n");
        printf("Durante o jogo digite ""voltar"" para retornar ao menu.\n\n");
        
        printf("Escolha a opção: ");
        scanf("%d", &op);    

        if(op == 0)
            break;

        char play1[100], play2[100];


        switch(op){

            case 1:    //Começar novo jogo

                resetMatriz(tab);

                printMatriz(tab);

                printf("Digite o número de jogadores (1 ou 2): ");
                scanf("%d", &mode);

                switch(mode){

                    case 1:

                        modo1xm;

                    case 2:

                        printf("\nDigite o nome do jogador 1: ");
                        scanf("%s", play1);

                        printf("\nDigite o nome do jogador 2: ");
                        scanf("%s", play2);

                        modo1x1(tab, play1, play2, &pl);
                }

                break;

            case 2:    //Continuar jogo salvo

                break;

            case 3:     //Voltar para jogo em andamento

                printf("\npl pos voltar = %d", pl);

                modo1x1(tab, play1, play2, &pl);
                break;

            case 4:     //Exibir o ranking atual

                break;

            default:
                
                printf("\nComando inválido!!\n");
                break;
        }
    }

    return 0;
}

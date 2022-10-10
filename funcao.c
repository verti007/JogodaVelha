#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"
#define ANSI_RESET            "\x1b[0m"  // desativa os efeitos anteriores
#define ANSI_BOLD             "\x1b[1m"  // coloca o texto em negrito
#define ANSI_COLOR_BLACK      "\x1b[30m"
#define ANSI_COLOR_RED        "\x1b[31m"
#define ANSI_COLOR_GREEN      "\x1b[32m"
#define ANSI_COLOR_YELLOW     "\x1b[33m"
#define ANSI_COLOR_BLUE       "\x1b[34m"
#define ANSI_COLOR_MAGENTA    "\x1b[35m"
#define ANSI_COLOR_CYAN       "\x1b[36m"
#define ANSI_COLOR_WHITE      "\x1b[37m"
#define ANSI_BG_COLOR_BLACK   "\x1b[40m"
#define ANSI_BG_COLOR_RED     "\x1b[41m"
#define ANSI_BG_COLOR_GREEN   "\x1b[42m"
#define ANSI_BG_COLOR_YELLOW  "\x1b[43m"
#define ANSI_BG_COLOR_BLUE    "\x1b[44m"
#define ANSI_BG_COLOR_MAGENTA "\x1b[45m"
#define ANSI_BG_COLOR_CYAN    "\x1b[46m"
#define ANSI_BG_COLOR_WHITE   "\x1b[47m"

// macros para facilitar o uso
#define BOLD(string)       ANSI_BOLD             string ANSI_RESET
#define BLACK(string)      ANSI_COLOR_BLACK      string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define RED(string)        ANSI_COLOR_RED        string ANSI_RESET
#define GREEN(string)      ANSI_COLOR_GREEN      string ANSI_RESET
#define YELLOW(string)     ANSI_COLOR_YELLOW     string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define MAGENTA(string)    ANSI_COLOR_MAGENTA    string ANSI_RESET
#define CYAN(string)       ANSI_COLOR_CYAN       string ANSI_RESET
#define WHITE(string)      ANSI_COLOR_WHITE      string ANSI_RESET
#define BG_BLACK(string)   ANSI_BG_COLOR_BLACK   string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_RED(string)     ANSI_BG_COLOR_RED     string ANSI_RESET
#define BG_GREEN(string)   ANSI_BG_COLOR_GREEN   string ANSI_RESET
#define BG_YELLOW(string)  ANSI_BG_COLOR_YELLOW  string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_MAGENTA(string) ANSI_BG_COLOR_MAGENTA string ANSI_RESET
#define BG_CYAN(string)    ANSI_BG_COLOR_CYAN    string ANSI_RESET
#define BG_WHITE(string)   ANSI_BG_COLOR_WHITE   string ANSI_RESET

// caracteres uteis para tabelas
#define TAB_HOR "\u2501" // ━ (horizontal)
#define TAB_VER "\u2503" // ┃ (vertical)
#define TAB_TL  "\u250F" // ┏ (top-left)
#define TAB_ML  "\u2523" // ┣ (middle-left)
#define TAB_BL  "\u2517" // ┗ (bottom-left)
#define TAB_TJ  "\u2533" // ┳ (top-join)
#define TAB_MJ  "\u254B" // ╋ (middle-join)
#define TAB_BJ  "\u253B" // ┻ (bottom-join)
#define TAB_TR  "\u2513" // ┓ (top-right)
#define TAB_MR  "\u252B" // ┫ (middle-right)
#define TAB_BR  "\u251B" // ┛ (bottom-right)

void printMatriz(char tab[3][3]){

printf("\n");printf("| %c | %c | %c |", tab[0][0], tab[0][1], tab[0][2]);
    printf("\n|---|---|---|\n");
    printf("| %c | %c | %c |", tab[1][0], tab[1][1], tab[1][2]);
    printf("\n|---|---|---|\n");
    printf("| %c | %c | %c | \n", tab[2][0], tab[2][1], tab[2][2]);
    printf("\n");

    printf("\n");
    printf(TAB_TL TAB_HOR TAB_HOR TAB_HOR TAB_TJ TAB_HOR TAB_HOR TAB_HOR TAB_TJ TAB_HOR TAB_HOR TAB_HOR TAB_TJ TAB_HOR TAB_HOR TAB_HOR TAB_TR"\n");
    printf(TAB_VER "   " TAB_VER " 1 " TAB_VER " 2 " TAB_VER " 3 " TAB_VER "\n");
    printf(TAB_ML TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MR "\n");
    printf(TAB_VER " 1 " TAB_VER " %c " TAB_VER " %c " TAB_VER " %c " TAB_VER "\n", tab[0][0], tab[0][1], tab[0][2]);
    printf(TAB_ML TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MR "\n");
    printf(TAB_VER " 2 " TAB_VER " %c " TAB_VER " %c " TAB_VER " %c " TAB_VER "\n", tab[1][0], tab[1][1], tab[1][2]);
    printf(TAB_ML TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MJ TAB_HOR TAB_HOR TAB_HOR TAB_MR "\n");
    printf(TAB_VER " 3 " TAB_VER " %c " TAB_VER " %c " TAB_VER " %c " TAB_VER "\n", tab[2][0], tab[2][1], tab[2][2]);
    printf(TAB_BL TAB_HOR TAB_HOR TAB_HOR TAB_BJ TAB_HOR TAB_HOR TAB_HOR TAB_BJ TAB_HOR TAB_HOR TAB_HOR TAB_BJ TAB_HOR TAB_HOR TAB_HOR TAB_BR "\n");
    printf("\n");

}

void carregarJogo();

void resetMatriz(char tab[3][3]){
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tab[i][j] = ' ';
        }
    }
}

void ranking();

int vencedor(char tab[3][3]){

    int win1 = 0, win2 = 0;

    for(int i = 0; i < 3; i++){     //testando se existe sequencia nas linhas    

        for(int j = 0; j < 3; j++){
            
            if(tab[i][j] == 'X'){

                win1++;
            }
                else if(tab[i][j] == 'O'){

                    win2++;
                }
        }
        
        if(win1 == 3)
            return 1;
     
            else if(win2 == 3)
                return 2;

            else{
                win1 = 0;
                win2 = 0;
            }
    }

    

    for(int i = 0; i < 3; i++){     //testando se existe sequencia nas colunas    

        for(int j = 0; j < 3; j++){
            
            if(tab[j][i] == 'X'){

                win1++;
            }
                else if(tab[i][j] == 'O'){

                    win2++;
                }
        }
        
        if(win1 == 3)
            return 1;
     
            else if(win2 == 3)
                return 2;

            else{
                win1 = 0;
                win2 = 0;
            }
    }

    

    for(int i = 0; i < 3; i++){     //testando se existe sequencia na diagonal principal                
        
        if(tab[i][i] == 'X'){

            win1++;
        }
            else if(tab[i][i] == 'O'){

                win2++;
            }
    
    }

    if(win1 == 3)
        return 1;
     
        else if(win2 == 3)
            return 2;

                else{
                    win1 = 0;
                    win2 = 0;
                }
    int j = 2;

    for(int i = 0; i < 3; i++){     //testando se existe sequencia na diagonal secundária    


        if(tab[j][i] == 'X'){

            win1++;
        }
            else if(tab[i][j] == 'O'){

                win2++;
            }
        j--;
    }

    if(win1 == 3)
        return 1;
     
        else if(win2 == 3)
            return 2;

                else{
                    win1 = 0;
                    win2 = 0;
                }
    
    //caso nenhuma delas seja, continuará normalmente

    return 0;
}

modo1x1(char tab[3][3], char p1[100], char p2[100], int *pl){

    printMatriz(tab);

    int win = 0, t = 0;

    getchar();


    while(1){

        int out = 0;
        
        printf("pl = %d", *pl);

        if(*pl % 2 == 0){
            out = comando(p1, tab, pl);

            if(out == 2){       //Caso o primeiro jogador decida voltar
                break;
            }
            
            pl++;


            win = vencedor(tab);

            if(win == 1){

                printf("Parabéns %s, você venceu!!\n\n", p1);
                
                printf("Digite qualquer tecla para continuar e pressione ENTER\n");
                getchar();

                break;
            }

            t++;
        }

        if(*pl == 9 && win == 0){
            
            printf("É um empate!!");

            printf("Digite qualquer tecla para continuar e pressione ENTER");
            getchar();
            break;
        }

    printf("pl = %d", *pl);

        if(*pl % 2 != 0){

            out =  comando(p2, tab, pl);

            if(out == 2){       //Caso o segundo jogador decida voltar

                printf("pl pre voltar = %d", *pl);
                break;
            }

            pl++;


            win = vencedor(tab);


            if(win == 2){

                printf("Parabéns %s, você venceu!!\n\n", p2);

                printf("Digite qualquer tecla para continuar e pressione ENTER\n");
                getchar();

                break;
            }

            if(*pl == 9 && win == 0){
                
                printf("É um empate!!\n\n");

                printf("Digite qualquer tecla para continuar e pressione ENTER");
                getchar();
                break;
            }
        }
         printf("pl = %d", *pl);
   
    }
}

int comando(char p[100], char tab[3][3], int t){

    while(1){   

        char com[100], base[100];
        int tam, pos, lin, col;

        for(int i = 0; i < 100; i++){
            com[i] = ' '; 
        }
        
        printf("\n");

        printf("%s, digite o comando: ", p);
        fgets(com, 100, stdin);
        
        tam = strlen(com);

        com[tam - 1] = '\0'; 

        for(int l = 0; l < 6; l++){

            base[l] = com[l];
        }
        
        int q = 0;

        for(int i = 0; i < tam; i++){

            if(com[i] == ' '){
                
                i++;

                for(int u = 0; u < 2; u++){
                    
                    com[u] = com[i];
                    i++;               
                }
                break;            
            }
        }

        pos = atoi(com);

        lin = (pos/10);

        col = (pos - (lin * 10)) - 1;

        lin--;       

        if(strcmp(base, "Marcar") != 0 && strcmp(base, "marcar") != 0 && strcmp(base, "Voltar") != 0 && strcmp(base, "voltar") != 0 && strcmp(base, "Salvar") != 0 && strcmp(base, "salvar") != 0)
                printf("\nComando inválido!!\n");
             
            else if(strcmp(base,"Voltar") == 0 || strcmp(base,"voltar") == 0){
                return 2;
            }
            else if(tab[lin][col] != ' ')
                printf("Posição já foi preenchida!\n");

            else if(t % 2 == 0){
                tab[lin][col] = 'X';
                break;
            }

            else if(t % 2 != 0){
                tab[lin][col] = 'O';
                break;
            }
    }
    printMatriz(tab);
}
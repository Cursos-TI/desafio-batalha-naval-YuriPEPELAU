#include <stdio.h>

int main(){
    // Bloco de decalaração de matrizes e vetores.
    char* coluna[10]={"   A ","B ","C ","D ","E ","F ","G ","H ","I ","J "};
    int tabuleiro[10][10];
    char* linha[10]={"1. " , "2. " , "3. " , "4. " , "5. " , "6. " , "7. " , "8. " , "9. " , "10."};
    // Impressão do nome do jogo
    printf("\nTABULEIRO DE BATALHA NAVAL \n");
    // Estrutura de repetição 'for' para impressão das letras que representam as colunas.
    for(int a=0;a<10;a++){
        printf("%s",coluna[a]);
    }
    printf("\n");
    // Estrutura de repetição 'for' para impressão dos números que representam as linhas.
    for(int i=0;i<10;i++){
        printf("%s",linha[i]);
        // Estrutura de repetição 'for' para impressão da matriz com os zeros representando a água e os três representam os barcos.
        for(int j=0;j<10;j++){
            tabuleiro[i][j]='0';
            tabuleiro[5][5]='3';
            tabuleiro[5][6]='3';
            tabuleiro[5][7]='3';
            tabuleiro[1][1]='3';
            tabuleiro[2][1]='3';
            tabuleiro[3][1]='3';
            printf("%c ",tabuleiro[i][j]);
        }
        
        printf("\n");
    }
    return 0;    
}

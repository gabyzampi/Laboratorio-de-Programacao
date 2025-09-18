//etapa 6

//15 Usando vetores (array), receba uma frase e retorne sua escrita inversa.
#include <stdio.h>
#include <string.h>

int main(void){
    char frase[50];

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);
    int tamanho = strlen(frase);

    printf("Frase Inversa: ");
    for (tamanho = strlen(frase)-1; tamanho >= 0; tamanho--) {
        printf("%c", frase[tamanho]);
    }
    printf("\n");


//16 Usando vetores de vetores (matriz), estruture e apresente um tabuleiro de xadrez.


    char tabuleiro[8][8];
    int i, j;

    // Montar o tabuleiro em padrão xadrez
    for (i = 0; i < 8; i++) {
        for ( j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0)
                tabuleiro[i][j] = ' '; // casa branca
            else
                tabuleiro[i][j] = '#'; // casa preta
        }
    }

    // Mostrar o tabuleiro
    for ( i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n"); // quebra de linha ao fim de cada linha
    }

    return 0;
}


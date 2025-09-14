//Matriz – Transposta
//Escreva um procedimento que receba uma matriz quadrada 3x3 e preencha uma segunda matriz com a transposta dela.
//Mostre as duas matrizes no main

#include <stdio.h>

void transposta(int matriz[3][3], int matrizT[3][3]){
    int i, j;
    for (i=0;i<3;i++){
        for (j =0; j<3; j++) {
            matrizT[j][i]=matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[3][3]){
    int i,j;
    for(i=0; i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3];
    int matrizT[3][3];
    int i, j;

    // Leitura da matriz
    printf("Digite os 9 elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a transposta
    transposta(matriz, matrizT);

    // Mostra a matriz original
    printf("\nMatriz Original:\n");
    imprimirMatriz(matriz);

    // Mostra a matriz transposta
    printf("\nMatriz Transposta:\n");
    imprimirMatriz(matrizT);

    return 0;
}

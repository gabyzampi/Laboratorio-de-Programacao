//Matriz – Diagonal principal
//Faça uma função que receba uma matriz 4x4 e retorne a soma dos elementos da diagonal principal.
//Teste a função com valores lidos do teclado
#include<stdio.h>

int funcao (int matriz[4][4]){
    int i;
    int soma=0;
    for (i=0;i<4;i++){
        soma += matriz[i][i];
    }
    return soma;
}

int main() {
    int matriz[4][4];
    int i, j;

    printf("Digite os 16 elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma da diagonal
    int resultado = funcao(matriz);

    // Mostra a matriz
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostra o resultado
    printf("\nA soma da diagonal principal eh: %d\n", resultado);

    return 0;
}
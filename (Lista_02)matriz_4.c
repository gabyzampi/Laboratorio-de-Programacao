//Matriz – Soma dos elementos
//Implemente uma função que receba uma matriz 3x3 e retorne a soma de todos os elementos.
//No main, leia a matriz do teclado e mostre o resultado


#include <stdio.h>

int funcaoDeMatriz(int matriz[3][3]){
    int i, j;
    int soma = 0;

    for (i = 0; i<3;i++){
        for(j = 0; j<3; j++)
        soma += matriz[i][j];

    }
    return soma;
}


int main(){
    int matriz[3][3];
    int i,j;

    printf("Digite os 9 elementos da matriz:");
    for (i=0;i<3;i++){
        for (j=0; j<3; j++){
            printf("Elemento [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = funcaoDeMatriz(matriz);

    printf("\nA soma de todos os elementos da matriz eh: %d\n", resultado);

    return 0;
}

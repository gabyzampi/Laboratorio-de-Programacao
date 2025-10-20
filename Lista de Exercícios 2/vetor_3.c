//Vetor – Procedimento de preenchimento
//Crie um procedimento que receba um vetor de inteiros e um valor inteiro e preencha todas as posições do vetor com esse valor.
//Depois, imprima o vetor no main.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funcaoRidicula(int vetor[10], int valor) {
    int i;
    for (i = 0; i < 10; i++) {
        vetor[i] = valor;
    }
}   
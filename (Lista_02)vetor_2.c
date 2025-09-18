//Vetor – Maior elemento
//Escreva uma função que receba um vetor de float e seu tamanho e retorne o maior valor armazenado.
//Teste a função com um vetor de 10 números lidos do teclado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float funcaoRidicula(float vetor[10]) {
    float maior = vetor[0];
    int i;
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    float vetor[10];
    int i;
    printf("Insira 10 numeros (um por vez e enter entre eles):\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    float maior = funcaoRidicula(vetor);

    printf("O maior numero inserido foi: %.2f\n", maior);;
}

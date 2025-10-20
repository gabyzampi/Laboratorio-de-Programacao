//Vetor e Funções Combinadas
/*Crie um programa que tenha:

●	Um procedimento para ler os elementos de um vetor.

●	Uma função que calcule a média aritmética dos valores.

●	Um procedimento que imprima apenas os valores acima da média*/

#include<stdio.h>

// Procedimento para ler os elementos do vetor
void leituraElementos(int vet[10]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vet[i]);
    }
}

// Função que calcula a média do vetor
float mediaElementos(int vet[10]) {
    int i;
    int soma = 0;
    float media = 0;
    for (i = 0; i < 10; i++) {
        soma += vet[i];
    }
    media = (float)soma / 10;
    return media;
}

// Procedimento que imprime valores acima da média
void acimaMedia(int vet[10], float media) {
    int i;
    printf("\nValores acima da media (%.2f): ", media);
    for (i = 0; i < 10; i++) {
        if (vet[i] > media) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}

int main() {
    int vetor[10];
    float media;

    // Lê os elementos
    leituraElementos(vetor);

    // Calcula a média
    media = mediaElementos(vetor);

    // Mostra a média
    printf("\nA media dos elementos é: %.2f\n", media);

    // Mostra os valores acima da média
    acimaMedia(vetor, media);

    return 0;
}
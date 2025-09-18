//Vetor – Soma dos elementos
//Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne a soma de todos os elementos.
//No main, peça para o usuário digitar os elementos do vetor e exiba o resultado

#include <stdio.h>

// Função para somar os elementos de um vetor
int somarElementos(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {    // FUNÇÃO PARA SOMAR OS ELEMENTOS DO VETOR
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declara o vetor com o tamanho informado pelo usuário
    int meuVetor[tamanho];

    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &meuVetor[i]);
    }

    // Chama a função e armazena o resultado
    int resultado = somarElementos(meuVetor, tamanho);

    printf("A soma dos elementos e: %d\n", resultado);

    return 0;
}

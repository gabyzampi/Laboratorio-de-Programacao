/*6. Desafio final 
Escreva um programa que: 
● Leia n inteiros do usuário (tamanho definido em tempo de execução) 
● Aloque memória dinamicamente usando malloc 
● Use ponteiros para preencher os valores 
● Crie uma função que receba o vetor dinâmico e seu tamanho e retorne o maior valor 
encontrado 
● Mostre o resultado e libere a memória com free*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i, maior;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for(i = 1; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("O maior valor e: %d\n", maior);

    free(vetor);

    return 0;
}

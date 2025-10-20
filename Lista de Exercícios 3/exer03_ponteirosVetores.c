/*Escreva um programa que: 
● Crie um vetor de 5 inteiros 
● Use apenas ponteiros (sem notação [ ]) para preencher os valores digitados pelo 
usuário 
● Depois percorra o vetor com aritmética de ponteiros e imprima todos os elementos*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[5];
    int *p;
    int i;

    p = vet; // aponta para o inicio do vetor

    for (i=0;i<5;i++){
         printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", p + i); // equivalente a &vet[i]
    }


    printf("Valores armazenados no vetor:");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i)); // equivalente a vet[i]
    }

    printf("\n");

    return 0;


}

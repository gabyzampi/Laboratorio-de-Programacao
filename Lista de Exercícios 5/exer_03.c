/*Exercício 3 – Struct com ponteiro para próxima 
Crie uma struct Node com os campos: 
● inteiro valor 
● ponteiro prox para o próximo Node 
Peça para o usuário digitar 5 números e monte manualmente uma lista encadeada (sem 
usar funções). Depois, percorra a lista imprimindo os valores. */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *prox;
} Node;

int main(){
    Node *inicio = NULL, *atual = NULL, *anterior = NULL;
    int i,num;

    for (i = 0; i < 5; i++) {
        atual = (Node *)malloc(sizeof(Node));


    printf("Insira um número: ");
        scanf("%d", &num);
        atual->valor = num;
        atual->prox = NULL;

        if (inicio == NULL) {
            inicio = atual; // primeiro nó da lista
        } else {
            anterior->prox = atual; // liga o anterior ao atual
        }

        anterior = atual; // atual vira o novo anterior
    }

    printf("\nValores na lista:\n");
    atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }

    atual = inicio;
    while (atual != NULL) {
        Node *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}
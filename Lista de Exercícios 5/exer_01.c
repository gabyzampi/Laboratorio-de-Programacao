/*Exercício 1 – Struct simples e acesso a campos 
Crie uma struct chamada Aluno com os campos: 
● nome (string de até 50 caracteres) 
● matrícula (inteiro) 
● nota (float) 
Peça ao usuário para preencher os dados de 3 alunos e depois exiba os dados na tela. */

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\n=========== INFORMACOES DO ALUNO %d ===========\n", i + 1);

        printf("Insira o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; 

        printf("Insira a matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Insira a nota: ");
        scanf("%f", &alunos[i].nota);

        getchar();
    }

    printf("\n=========== DADOS DOS ALUNOS ===========\n");
    for (i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}
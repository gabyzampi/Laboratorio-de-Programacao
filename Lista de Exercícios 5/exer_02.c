/*Exercício 2 – Vetor de struct 
Usando a struct Aluno do exercício anterior, armazene os dados de até 100 alunos em um 
vetor. 
O programa deve permitir: 
● Inserir um novo aluno na próxima posição livre 
● Listar todos os alunos cadastrados */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[100];
    int total = 0;  
    int opcao, i;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Inserir novo aluno\n");
        printf("2. Listar alunos cadastrados\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                if (total < 100) {
                    printf("\n--- Cadastro do aluno %d ---\n", total + 1);
                    
                    printf("Nome: ");
                    fgets(alunos[total].nome, sizeof(alunos[total].nome), stdin);
                    alunos[total].nome[strcspn(alunos[total].nome, "\n")] = '\0'; 

                    printf("Matricula: ");
                    scanf("%d", &alunos[total].matricula);

                    printf("Nota: ");
                    scanf("%f", &alunos[total].nota);

                    getchar();

                    total++; 
                    printf("Aluno cadastrado com sucesso!\n");
                } else {
                    printf("Limite maximo de alunos atingido!\n");
                }
                break;

            case 2:
                if (total == 0) {
                    printf("\nNenhum aluno cadastrado ainda.\n");
                } else {
                    printf("\n--- Lista de alunos cadastrados ---\n");
                    for (i = 0; i < total; i++) {
                        printf("\nAluno %d:\n", i + 1);
                        printf("Nome: %s\n", alunos[i].nome);
                        printf("Matricula: %d\n", alunos[i].matricula);
                        printf("Nota: %.2f\n", alunos[i].nota);
                    }
                }
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}

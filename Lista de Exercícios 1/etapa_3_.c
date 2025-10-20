//etapa 3
//7

#include <stdio.h>
int main (void){
int num1;
printf("Insira um numero:");
scanf("%d", &num1);
printf("O numero inserido foi: %d\n", num1);
if (num1 < 0) {
    printf("O numero inserido e negativo.\n");
} else if (num1 > 0) {
    printf("O numero inserido e positivo.\n");
} else {
    printf("O numero inserido e zero.\n");
}


//8

float num_1,num_2;
printf("Insira uma numero:");
scanf("%f", &num_1);
printf("Voce inseriu: %.2f\n", num_1);

printf("Insira outro numero:");
scanf("%f", &num_2);
printf("Voce inseriu: %f\n", num_2);
    if (num_1 > num_2){
        printf("O numero %.2f e maior que o numero %.2f.\n", num_1, num_2);
    } else if (num_1 < num_2){
        printf("O numero %.2f e maior que o numero %.2f.\n", num_2, num_1);
    } else {
        printf("Os numeros sao iguais.\n");
    }


//9

int prova_1,prova_2,prova_3;
float media;
    printf("Insira a nota da prova 1: ");
    scanf("%d", &prova_1);
    printf("Insira a nota da prova 2: ");
    scanf("%d", &prova_2);
    printf("Insira a nota da prova 3: ");
    scanf("%d", &prova_3);
    media = (prova_1 + prova_2 + prova_3) / 3.0;
    printf("A media das provas e: %.2f\n", media);

    if (media >=70.0){
        printf("Aprovado\n");
    } 
    else if (media >=50.0){
        printf("Recuperacao\n");
    }
    else if (media < 50.0){
        printf("Reprovado\n");
    }
    return 0;

}

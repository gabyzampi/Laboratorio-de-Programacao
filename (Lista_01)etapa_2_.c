//Etapa 2
//4)

#include <stdio.h>

int main (){

    int var_1,var_2,var_3,var_4,var_5,var_6,var_7,var_8,var_9,var_10;
    printf("\nSOMA\n");
    printf("Insira um numero:");
    scanf("%d",&var_1);
    printf("Voce digitou %d\n", var_1);
    
    printf("Insira outro numero:");
    scanf("%d",&var_2);
    printf("Voce digitou %d\n", var_2);

    int soma = var_1 + var_2;
    printf("\nO resultado da soma e: %d.\n", soma);

    printf("\nSUBTRACAO\n");
    printf("Insira um numero:");
    scanf("%d",&var_3);
    printf("Voce digitou %d\n", var_3);
    
    printf("\nInsira outro numero:");
    scanf("%d",&var_4);
    printf("Voce digitou: %d\n", var_4);

    int subtr = var_3 - var_4;
    printf("\nO resultdao da subtracao e: %d.\n", subtr);


    printf("\nMULTIPLICACAO\n");

    printf("Insira um numero:");
    scanf("%d",&var_5);
    printf("Voce digitou %d\n", var_5);
    
    printf("Insira outro numero:");
    scanf("%d",&var_6);
    printf("Voce digitou: %d\n", var_6);

    int mult = var_5 * var_6;
    printf("\nO resultdao da multiplicacao e: %d.\n", mult);

    printf("\nDIVISAO\n");
    
    printf("Insira um numero:");
    scanf("%d",&var_7);
    printf("Voce digitou %d\n", var_7);
    
    printf("Insira outro numero:");
    scanf("%d",&var_8);
    printf("Voce digitou: %d\n", var_8);

    int div = var_7 / var_8;
    printf("\nO resultdao da multiplicacao e: %d.\n", div);

    printf("\nRESTO\n");
    printf("Insira um numero:");
    scanf("%d",&var_9);
    printf("Voce digitou %d\n", var_9);

    printf("Insira outro numero:");
    scanf("%d",&var_10);
    printf("Voce digitou: %d\n",var_10);

    int resto = var_9 % var_10;
    printf("\nO resultado do resto da divisao e: %d.\n", resto);
    
    //5

    float raio = 0;
    printf("\nInsira o raio do circulo:");
    scanf("%f", &raio);

    float area = 3.14 * raio * raio;
    printf("\nA area do circulo e: %.2f\n", area);


    //6

    int idade = 0;
    printf("\nInsira a sua idade:");
    scanf("%d", &idade);

    int dias = idade*360;

    printf("\nVoce viveu %d dias e de aproximadamente\n", dias);

    return 0;
    }

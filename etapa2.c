#include <stdio.h>

int main (){

    int var_1;
    printf("\nSOMA\n");
    printf("Insira um numero:");
    scanf("%d",&var_1);
    printf("Voce digitou %d\n", var_1);
    
    int var_2;
    printf("Insira outro numero:");
    scanf("%d",&var_2);
    printf("Voce digitou %d\n", var_2);

    int soma = var_1 + var_2;
    printf("\nO resultado da soma e: %d.\n", soma);

    int var_3;
    printf("\nSUBTRACAO\n");
    printf("Insira um numero:");
    scanf("%d",&var_3);
    printf("Voce digitou %d\n", var_3);
    
    int var_4;
    printf("\nInsira outro numero:");
    scanf("%d",&var_4);
    printf("Voce digitou: %d\n", var_4);

    int subtr = var_3 - var_4;
    printf("\nO resultdao da subtracao e: %d.\n", subtr);


    printf("MULTIPLICACAO");
    int var_5;
    printf("Insira um numero:");
    scanf("%d",&var_5);
    printf("Voce digitou %d\n", var_5);
    
    int var_6;
    printf("Insira outro numero:");
    scanf("%d",&var_6);
    printf("Voce digitou: %d\n", var_6);

    int mult = var_5 * var_6;
    printf("\nO resultdao da multiplicacao e: %d.\n", mult);

    printf("DIVISAO");
    
    int var_7;
    printf("Insira um numero:");
    scanf("%d",&var_7);
    printf("Voce digitou %d\n", var_7);
    
    int var_8;
    printf("Insira outro numero:");
    scanf("%d",&var_8);
    printf("Voce digitou: %d\n", var_8);

    int div = var_7 / var_8;
    printf("\nO resultdao da multiplicacao e: %d.\n", div);
    return 0;


    }
// etapa 5
// 13

#include <stdio.h>

int main(void) {

float numero1, numero2;

printf("Insira um numero para operação:");
scanf("%f", &numero1);
printf("Insira outro numero para operação:");
scanf("%f", &numero2);

printf("Escolha um operador: (+),(-),(*),(/):");
char operador;
scanf(" %c", &operador);

switch (operador) {
    case '+':
        printf("Resultado: %.2f\n", numero1 + numero2);
        break;
    case '-':
        printf("Resultado: %.2f\n", numero1 - numero2);
        break;
    case '*':
        printf("Resultado: %.2f\n", numero1 * numero2);
        break;
    case '/':
        if (numero2 != 0) {
            printf("Resultado: %.2f\n", numero1 / numero2);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break;
    default:
        printf("Operador inválido.\n");
        break;
}

//14

int temperaturaCel;
int temperaturaFah; 
int opcao;

printf("Voce deseja coverter de C para F (1) ou de F para C (2)? ");
scanf("%d", &opcao);

if (opcao == 1) {
    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temperaturaCel);
    printf("Temperatura em Fahrenheit: %.2f\n", (temperaturaCel * 9.0/5.0) + 32);
} else if (opcao == 2) {
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &temperaturaFah);
    printf("Temperatura em Celsius: %.2f\n", (temperaturaFah - 32) * 5.0/9.0);
} else {
    printf("Opcao invalida.\n");

}

return 0;
}
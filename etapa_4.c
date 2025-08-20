//etapa 4
//10 numeros de 1 a 100

#include <stdio.h>

int main(void) {
/*int contador = 1;
 while (contador < 101) {
     printf("Contador: %d\n", contador);
     contador++;
 }
 

 //11
  
int i, j;

 for (i = 1; i <= 10; i++) {
     printf("\nTabuada do %d:\n", i);
     for (j = 1; j <= 10; j++) {
        printf("%d x %d = %d\n", i, j, i * j);
    }
} 
}

//12

 int soma = 0;
 int numero;

    printf("Digite o numero (0 para sair): ");
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        soma += numero;
    }
    
    printf("A soma dos numeros eh: %d\n", soma);
    

//13

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
*/


//15 Usando vetores (array), receba uma frase e retorne sua escrita inversa.

char frase[100];
printf ("Digite uma frase:");
scanf("%c[^\n]", &frase);

// Inverter a frase
int i, j;
char fraseInvertida[100];
for (i = 0, j = strlen(frase) - 1; i < strlen(frase); i++, j--) {
    fraseInvertida[i] = frase[j];
}
fraseInvertida[i] = '\0';

printf("Frase invertida: %s\n", fraseInvertida);
return 0;
}
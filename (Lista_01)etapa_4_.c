//etapa 4
//10 numeros de 1 a 100

#include <stdio.h>

int main(void) {
int contador = 1;
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
    return 0;
}

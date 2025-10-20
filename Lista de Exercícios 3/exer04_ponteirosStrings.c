/*4. Ponteiros e strings 
Faça um programa que: 
● Leia uma string (até 50 caracteres) 
● Conte o número de vogais usando ponteiros para percorrer a string 
● Mostre o resultado */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[50];
    char *p;
    int contador_vogais = 0;

    printf("Digite uma string (até 50 caracteres): ");
    fgets(str, sizeof(str), stdin);

    p = str;

      while (*p != '\0') {
        if (*p == 'a' || *p == 'A' ||
            *p == 'e' || *p == 'E' ||
            *p == 'i' || *p == 'I' ||
            *p == 'o' || *p == 'O' ||
            *p == 'u' || *p == 'U') {
            contador_vogais++;
        }
        p++; // avança o ponteiro para o próximo caractere
    }

    printf("Número de vogais: %d\n", contador_vogais);

    return 0;
    
}


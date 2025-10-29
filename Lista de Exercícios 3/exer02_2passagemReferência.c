/*2. Passagem por referência 
Implemente uma função chamada trocar que receba dois inteiros por referência (via 
ponteiro) e troque seus valores. 
No main, peça ao usuário para digitar dois números, chame a função e mostre os valores 
trocados. */

#include <stdio.h>

void trocar(int*num1, int*num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){

    int num1, num2;

    printf("Digite um numero:");
    scanf("%d", &num1);

    printf("Digite outro numero:");
    scanf("%d", &num2);

    trocar(&num1,&num2);

    printf("Os valores foram trocados: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

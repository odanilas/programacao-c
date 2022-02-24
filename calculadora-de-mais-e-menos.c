#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int numero1, numero2, op;

    printf("Digite 1 para somar ou 2 para subtrair: \n");
    scanf("%d", &op);

    printf("digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("digite o segundo numero: \n");
    scanf("%d", &numero2);

    if (op == 1) {

        numero1 = numero1 + numero2;
        
        printf("O resuldado da soma e: %d", numero1);
    }
    else{
        numero1 = numero1 - numero2;
        
        printf("O resultado da subtracao e: %d", numero1);
    }
    
    return 0;

}

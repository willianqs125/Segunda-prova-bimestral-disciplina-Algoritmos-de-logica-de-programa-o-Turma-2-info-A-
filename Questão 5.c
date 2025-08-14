#include <stdio.h>

int main() {
    int numero;


    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    if ((numero % 2 == 0 && numero % 3 != 0) || (numero % 3 == 0 && numero % 2 != 0)) {
        printf("O número %d é divisível por 2 ou por 3, mas não por ambos.\n", numero);
    } else {
        printf("O número %d não atende à condição (divisível apenas por 2 ou apenas por 3).\n", numero);
    }

    return 0;
}

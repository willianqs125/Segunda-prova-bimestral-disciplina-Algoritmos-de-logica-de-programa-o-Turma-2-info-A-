#include <stdio.h>

int main() {
    int numero1;

    
    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero1);

    
    if (numero1 < 10000 || numero1 > 99999) {
        printf("Entrada invalida. Digite um numero com exatamente cinco digitos.\n");
        return 1;
    }
    int n1 = numero1 / 10000;
    int n2 = (numero1 / 1000) % 10;
    int n3 = (numero1 / 100) % 10;
    int n4 = (numero1 / 10) % 10;
    int n5 = numero1 % 10;
    
    printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);

    return 0;
}

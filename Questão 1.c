#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero);

    // Verifica se o número tem exatamente cinco dígitos
    if (numero < 10000 || numero > 99999) {
        printf("Entrada invalida. Digite um numero com exatamente cinco digitos.\n");
        return 1;
    }
    int d1 = numero / 10000;
    int d2 = (numero / 1000) % 10;
    int d3 = (numero / 100) % 10;
    int d4 = (numero / 10) % 10;
    int d5 = numero% 10;
    
    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}

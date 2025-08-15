#include <stdio.h>

int main() {
    int numero;
    
    printf("Numero\tQuadrado\tCubo\n");
    
    for (numero = 0; numero <= 10; numero++) {
        printf("%d\t%d\t\t%d\n", numero, numero*numero, numero*numero*numero);
    }

    return 0;
}

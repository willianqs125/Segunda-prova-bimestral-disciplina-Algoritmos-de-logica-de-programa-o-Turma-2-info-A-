#include <stdio.h>

int main() {
    
    short idade;
    int numero_conta;
    long montante_deposito;

    
    printf("Digite sua idade: ");
    scanf("%hd", &idade);  

    printf("Digite o número da conta: ");
    scanf("%d", &numero_conta);  

    printf("Digite o montante a depositar: ");
    scanf("%ld", &montante_deposito); 

    
    printf("\nDados fornecidos:\n");
    printf("Idade: %hd\n", idade);
    printf("Número da conta: %d\n", numero_conta);
    printf("Montante a depositar: %ld\n", montante_deposito);

    return 0;
}

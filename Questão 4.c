#include <stdio.h>

int main() {
    int opcao;
    double numero1, numero2, resultado;

    
    printf("Escolha uma operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite a opção desejada (1-4): ");
    scanf("%d", &opcao);

    
    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);

    switch (opcao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado da soma: %.2lf\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado da subtração: %.2lf\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Resultado da multiplicação: %.2lf\n", resultado);
            break;
        case 4:
            
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado da divisão: %.2lf\n", resultado);
            } else {
                printf("Erro: Não é possível dividir por zero!\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
            break;
    }

    return 0;
}

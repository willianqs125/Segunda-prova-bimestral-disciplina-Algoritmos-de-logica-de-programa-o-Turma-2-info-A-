#include <stdio.h>

int main() {
    int num;
    
    printf("Numero\tQuadrado\tCubo\n");
    
    for (num = 0; num <= 10; num++) {
        printf("%d\t%d\t\t%d\n", num, num*num, num*num*num);
    }

    return 0;
}

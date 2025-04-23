#include <stdio.h>
#define TAMANHO 5

int main() {
    double x[TAMANHO] = {1.6, 2.3, 3.2, 4.1, 5.0};
    
    for(int i = 0; i < TAMANHO; i++) {
        printf("x[%d] = %.2f\n", i,  x[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    double numeros[3]; 
    double soma = 0.0;  

    printf("Digite 3 numeros reais:\n");

    for (int i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    for (int i = 0; i < 3; i++) {
        soma += numeros[i];
    }

    printf("A soma dos numeros eh: %.2lf\n", soma);

    return 0;
}
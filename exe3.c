#include <stdio.h>

int main() {
    double notas[4];
    double total = 0.0;

    printf("Digite as 4 notas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }

    for (int i = 0; i < 4; i++) {
        total += notas[i];
    }

    printf("Total das notas: %.2lf\n", total);

    return 0;
}
#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2;
}

float dobro(float numeros[]) {
    numeros[0] *= 2.0;
    numeros[1] *= 2.0;
    return media(numeros);
}

void exibir_vetor(float numeros[]) {
    printf("Vetor: [%.2f, %.2f]\n", numeros[0], numeros[1]);
}

void maior(float numeros[]) {
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

int main() {
    float numeros[2];

    printf("Digite o primeiro número real: ");
    scanf("%f", &numeros[0]);

    printf("Digite o segundo número real: ");
    scanf("%f", &numeros[1]);

    printf("\nAntes de calcular a média:\n");
    exibir_vetor(numeros);

    float media_original = media(numeros);
    printf("Média original: %.2f\n", media_original);

    float nova_media = dobro(numeros);
    printf("\nApós aplicar dobro():\n");
    exibir_vetor(numeros);
    printf("Nova média: %.2f\n", nova_media);

    printf("\nAntes de chamar maior():\n");
    exibir_vetor(numeros);

    maior(numeros);

    printf("Após chamar maior():\n");
    exibir_vetor(numeros);

    return 0;
}

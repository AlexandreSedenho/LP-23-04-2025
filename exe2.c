#include <stdio.h>
#define PI 3.14159

int main() {
    double raio;
    double area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2lf\n", area);
    
    return 0;
}
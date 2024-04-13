#include <stdio.h>

int main() {
    double acumulador = 0.0;
    double promedio = 0.0;
    int contador = 0;
    int edad;

    do {
        printf("Ingrese edad: ");
        scanf("%d", &edad);
        contador++;
        acumulador += edad;
    } while (edad != 0);

    contador--;
    if (contador != 0) {
        promedio = acumulador / contador;
    }

    printf("El promedio es: %.2lf\n", promedio);

    return 0;
}
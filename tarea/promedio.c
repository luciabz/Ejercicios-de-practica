#include<stdio.h>

float calcularPromedio(int notas[], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }

    return (float)suma / n;
}

int main() {
    int n;

    printf("Ingrese cantidad de notas: ");
    scanf("%d", &n);

    int notas[n];

    printf("Ingrese notas:\n");
    for (int i = 0; i < n; i++) {
        printf("Ingrese nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    printf("El promedio de notas: %.2f\n", calcularPromedio(notas, n));

    return 0;
}

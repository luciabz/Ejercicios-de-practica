#include <stdio.h>

int main() {
    // Definir las dimensiones de la matriz
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    // Declarar la matriz con las dimensiones proporcionadas
    int matriz[filas][columnas];

    // Cargar la matriz con valores ingresados por el usuario
    printf("Ingrese los elementos de la matriz:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar la matriz ingresada
    printf("\nMatriz ingresada:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

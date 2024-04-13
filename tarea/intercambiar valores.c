#include <stdio.h>


void intercambiar(int *q, int *u) {
    int x = *q;
    *q = *u;
    *u = x;
}

int main() {
    int a, b;
    printf("Ingresar valor1 = ");
    scanf("%d", &a);
    printf("Ingresar valor2 = ");
    scanf("%d", &b);
    printf("Valores ingresados: valor1 = %d, valor2 = %d\n", a, b);

    intercambiar(&a, &b);

    printf("Valores intercambiados: valor1 = %d, valor2 = %d\n", a, b);

    return 0;
}
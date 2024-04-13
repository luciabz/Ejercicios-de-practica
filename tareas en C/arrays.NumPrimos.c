#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
  if (num < 2) {
    return 0; // No es primo si es menor que 2
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0; // No es primo si es divisible por algún número menor o igual a
                // su raíz cuadrada
    }
  }
  return 1; // Es primo
}

// Función para ordenar un array de enteros usando el método de la burbuja
void ordenarArray(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Intercambiar elementos si están en el orden incorrecto
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;

  // Solicitar al usuario el número de elementos
  printf("Ingrese la cantidad de números: ");
  scanf("%d", &n);

  int numeros[n];
  int primos[n];
  int primosCount = 0;

  // Solicitar al usuario ingresar los números
  printf("Ingrese los números:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &numeros[i]);
    if (esPrimo(numeros[i])) {
      primos[primosCount++] = numeros[i];
    }
  }

  // Mostrar los números ingresados
  printf("Números ingresados: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  // Mostrar los números primos
  printf("Números primos: ");
  for (int i = 0; i < primosCount; i++) {
    printf("%d ", primos[i]);
  }
  printf("\n");

  // Ordenar los números ingresados
  ordenarArray(numeros, n);

  // Mostrar los números ordenados
  printf("Números ordenados: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  return 0;
}

#include "subprogramdecalcu.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  while (1) {
    printf("\nBienvenido a la Calculadora de perimetro y area\n");
    printf("1. Calcular el perímetro y área de un círculo\n");
    printf("2. Calcular el perímetro y área de un pentágono\n");
    printf("3. Calcular el perímetro y área de un rectángulo\n");
    printf("4. Salir\n");

    int opcion;
    printf("\nSeleccione una opción (1-4): ");
    scanf("%d", &opcion);

    switch (opcion) {
    case 1: {
      double radio;
      printf("Ingrese el radio del círculo: ");
      scanf("%lf", &radio);
      double area = calcularArea(radio);
      double perimetro = calcularPerimetro(radio);
      printf("El perímetro del círculo es: %.2lf\n", perimetro);
      printf("El área del círculo es: %.2lf\n", area);
      break;
    }
    case 2: {
      double lado_pentagono;
      printf("Ingrese la longitud de un lado del pentágono: ");
      scanf("%lf", &lado_pentagono);
      double apotema = calcular_apotema(lado_pentagono);
      double area = area_pentagono(lado_pentagono);
      double perimetro = perimetro_pentagono(lado_pentagono);

      printf("El perímetro del pentágono es: %.2lf\n", perimetro);
      printf("El área del pentágono es: %.2lf\n", area);
      break;
    }
    case 3: {
      double base_rectangulo, altura_rectangulo;
      printf("Ingrese la base del rectángulo: ");
      scanf("%lf", &base_rectangulo);
      printf("Ingrese la altura del rectángulo: ");
      scanf("%lf", &altura_rectangulo);
      double area = area_rectangulo(base_rectangulo, altura_rectangulo);
      double perimetro =
          perimetro_rectangulo(base_rectangulo, altura_rectangulo);
      printf("El perímetro del rectángulo es: %.2lf\n", perimetro);
      printf("El área del rectángulo es: %.2lf\n", area);
      break;
    }
    case 4:
      printf("Saliendo del programa...\n");
      return 0;
    default:
      printf("Opción no válida. Por favor, seleccione una opción válida.\n");
    }
  }

  return 0;
}

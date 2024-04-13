#include <math.h>
#include <stdio.h>


double fradio(int radio) {
  double peri = 2 * 3.14 * radio;
  double are = 3.14 * radio * radio;
  return peri, are;
}

void fpentagono(double lado_pentagono) {
  double apotema =
      ((5 * lado_pentagono * lado_pentagono) / (4 * tan(3.14 / 5)));
  double perimetro = 5 * lado_pentagono;
  double area = (5 * lado_pentagono * apotema) / 2;

  printf("El perímetro del pentágono es: %.2lf\n", perimetro);
  printf("El área del pentágono es: %.2lf\n", area);
}

void frectangulo(int base_rectangulo, int altura_rectangulo) {
  int rperimetro = 2 * (base_rectangulo + altura_rectangulo);
  int rarea = base_rectangulo * altura_rectangulo;

  printf("El perímetro del rectángulo es: %d\n", rperimetro);
  printf("El área del rectángulo es: %d\n", rarea);
}

int main() {
  while (1) {
    printf("\nBienvenido a la Calculadora de perímetro y área\n");
    printf("1. Calcular el perímetro y área de un círculo\n");
    printf("2. Calcular el perímetro y área de un pentágono\n");
    printf("3. Calcular el perímetro y área de un rectángulo\n");
    printf("4. Salir\n");

    int opcion;
    printf("\nSeleccione una opción (1-4): ");
    scanf("%d", &opcion);

    switch (opcion) {
    case 1: {
      int radio;
      printf("Ingrese el radio del círculo: ");
      scanf("%d", &radio);
      double peri, are;
      peri = fradio(radio);
      printf("El perímetro del círculo es: %.2lf\n", peri);
      printf("El área del círculo es: %.2lf\n", are);
      break;
    }
    case 2: {
      double lado_pentagono;
      printf("Ingrese la longitud de un lado del pentágono: ");
      scanf("%lf", &lado_pentagono);
      fpentagono(lado_pentagono);
      break;
    }
    case 3: {
      int base_rectangulo, altura_rectangulo;
      printf("Ingrese la base del rectángulo: ");
      scanf("%d", &base_rectangulo);
      printf("Ingrese la altura del rectángulo: ");
      scanf("%d", &altura_rectangulo);
      frectangulo(base_rectangulo, altura_rectangulo);
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

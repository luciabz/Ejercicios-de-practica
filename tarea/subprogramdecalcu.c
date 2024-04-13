#include "subprogramdecalcu.h"
#include <math.h>

double calcularPerimetro(double radio) {
    return 2 * M_PI * radio;
}

double calcularArea(double radio) {
    return M_PI * radio * radio;
}

double calcular_apotema(double lado_pentagono) {
    return (5 * pow(lado_pentagono, 2)) / (4 * tan(M_PI / 5));
}

double area_pentagono(double lado_pentagono) {
    double apotema = calcular_apotema(lado_pentagono);
    double area = (5 * lado_pentagono * apotema) / 2;
    return area;
}

double perimetro_rectangulo(double base_rectangulo, double altura_rectangulo) {
    return 2 * (base_rectangulo + altura_rectangulo);
}

double area_rectangulo(double base_rectangulo, double altura_rectangulo) {
    return base_rectangulo * altura_rectangulo;
}

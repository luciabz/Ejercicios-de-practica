#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion = 0;

    while (opcion != 4) {
        cout << "Calculadora de perímetro y área" << endl;
        cout << "1. Círculo  2. Pentágono  3. Rectángulo  4. Salir" << endl;
        cout << "Seleccione una opción (1-4): ";
        cin >> opcion;

        double perimetro = 0, area = 0;

        switch (opcion) {
            case 1:
                cout << "Radio del círculo: ";
                double radio;
                cin >> radio;
                perimetro = 2 * M_PI * radio;
                area = M_PI * radio * radio;
                break;
            case 2:
                cout << "Lado del pentágono: ";
                double lado;
                cin >> lado;
                double apotema = (5 * lado * lado) / (4 * tan(M_PI / 5));
                perimetro = 5 * lado;
                area = (5 * lado * apotema) / 2;
                break;
            case 3:
                cout << "Base del rectángulo: ";
                double base;
                cin >> base;
                cout << "Altura del rectángulo: ";
                double altura;
                cin >> altura;
                perimetro = 2 * (base + altura);
                area = base * altura;
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
                continue;
        }

        if (opcion != 4) {
            cout << "Perímetro: " << perimetro << endl;
            cout << "Área: " << area << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        cout << "\nBienvenido a la Calculadora de perímetro y área" << endl;
        cout << "1. Calcular el perímetro y área de un círculo" << endl;
        cout << "2. Calcular el perímetro y área de un pentágono" << endl;
        cout << "3. Calcular el perímetro y área de un rectángulo" << endl;
        cout << "4. Salir" << endl;
        
        int opcion;
        cout << "\nSeleccione una opción (1-4): ";
        cin >> opcion;
        
        switch (opcion) {
            case 1: {
                double radio;
                cout << "Ingrese el radio del círculo: ";
                cin >> radio;
                double perimetro_circulo = 2 * 3.14159265359 * radio;
                double area_circulo =3.14159265359  * pow(radio, 2);
                cout << "El perímetro del círculo es: " << perimetro_circulo << endl;
                cout << "El área del círculo es: " << area_circulo << endl;
                break;
            }
            case 2: {
                double lado_pentagono;
                cout << "Ingrese la longitud de un lado del pentágono: ";
                cin >> lado_pentagono;
                double apotema = (5 * pow(lado_pentagono, 2)) / (4 * tan(3.14159265359/ 5));
                double perimetro_pentagono = 5 * lado_pentagono;
                double area_pentagono = (5 * lado_pentagono * apotema) / 2;
                cout << "El perímetro del pentágono es: " << perimetro_pentagono << endl;
                cout << "El área del pentágono es: " << area_pentagono << endl;
                break;
            }
            case 3: {
                double base_rectangulo, altura_rectangulo;
                cout << "Ingrese la base del rectángulo: ";
                cin >> base_rectangulo;
                cout << "Ingrese la altura del rectángulo: ";
                cin >> altura_rectangulo;
                double perimetro_rectangulo = 2 * (base_rectangulo + altura_rectangulo);
                double area_rectangulo = base_rectangulo * altura_rectangulo;
                cout << "El perímetro del rectángulo es: " << perimetro_rectangulo << endl;
                cout << "El área del rectángulo es: " << area_rectangulo << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
        }
    }

    return 0;
}

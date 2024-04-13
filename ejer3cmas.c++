#include <iostream>
using namespace std;

int main() {
    double acumulador = 0.0;
    double promedio = 0.0;
    int contador = 0;
    int edad;

    do {
        cout << "Ingrese edad: ";
        cin >> edad;
        contador++;
        acumulador += edad;
    } while (edad != 0);

    contador--;
    if (contador != 0) {
        promedio = acumulador / contador;
    }

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
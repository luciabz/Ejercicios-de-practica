#include <iostream>
#include <string>

using namespace std;

int main() {
    int edad;
    string sexo;
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    cout << "Ingrese su sexo (F si es femenino y M si es masculino): ";
    cin >> sexo;
    
    if (edad >= 16) {
        if (sexo == "F" || sexo == "f") {
            cout << "Usted es mujer y puede votar" << endl;
        } else if (sexo == "M" || sexo == "m") {
            cout << "Usted es hombre y puede votar" << endl;
        } else {
            cout << "Sexo ingresado inválido" << endl;
        }
    } else {
        cout << "Usted no puede votar" << endl;
    }
    
    return 0;
}
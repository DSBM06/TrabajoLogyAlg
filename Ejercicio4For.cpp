/*1. Indicar el promedio general de una seccion*/

#include <iostream>

using namespace std;

int main() {
    float suma = 0;
    float promedio;
    float nota;

    for (int contador = 1; contador <= 10; contador++) {
        cout << "Ingrese la nota del estudiante " << contador << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / 10;

    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}

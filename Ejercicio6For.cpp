#include <iostream>

using namespace std;

int main() {
    int suma = 0;

    for (int numero = 100; numero <= 200; numero += 2) {
        suma += numero;
    }

    cout << "La suma de los números pares entre 100 y 200 es: " << suma << endl;

    return 0;
}
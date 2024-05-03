/*suma de numeros naturales de 1 hasta n*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un número natural n: ";
    cin >> n;

    int suma = 0;

    // Suma de los números naturales desde 1 hasta n
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
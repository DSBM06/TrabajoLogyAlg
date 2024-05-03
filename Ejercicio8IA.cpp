#include <iostream>
#include <vector>

int main() {
    // Solicitar al usuario que ingrese la longitud de los vectores
    int n;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> n;

    // Solicitar al usuario que ingrese los elementos del primer vector
    std::vector<int> v1;
    std::cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        v1.push_back(temp);
    }

    // Solicitar al usuario que ingrese los elementos del segundo vector
    std::vector<int> v2;
    std::cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        v2.push_back(temp);
    }

    // Calcular el producto punto de los dos vectores
    int producto_punto = 0;
    for (int i = 0; i < n; i++) {
        producto_punto += v1[i] * v2[i];
    }

    // Mostrar el resultado
    std::cout << "El producto punto de los dos vectores es: " << producto_punto << std::endl;

    return 0;
}
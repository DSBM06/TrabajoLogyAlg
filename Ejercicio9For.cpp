#include <iostream>
using namespace std;

void multiplicar_matrices(int matriz1[][10], int matriz2[][10], int resultado[][10], int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2) {
    // Verificar si las dimensiones son compatibles
    if (columnas_matriz1 != filas_matriz2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return;
    }

    // Realizar la multiplicación de matrices
    for(int i = 0; i < filas_matriz1; ++i) {
        for(int j = 0; j < columnas_matriz2; ++j) {
            resultado[i][j] = 0;
            for(int k = 0; k < columnas_matriz1; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    int filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2;

    // Solicitar al usuario ingresar las dimensiones de las matrices
    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas_matriz1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas_matriz1;
    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas_matriz2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas_matriz2;

    // Solicitar al usuario ingresar los elementos de las matrices
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for(int i = 0; i < filas_matriz1; ++i) {
        for(int j = 0; j < columnas_matriz1; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for(int i = 0; i < filas_matriz2; ++i) {
        for(int j = 0; j < columnas_matriz2; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    multiplicar_matrices(matriz1, matriz2, resultado, filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2);

    // Mostrar el resultado
    cout << "El resultado de la multiplicación de matrices es:" << endl;
    for(int i = 0; i < filas_matriz1; ++i) {
        for(int j = 0; j < columnas_matriz2; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
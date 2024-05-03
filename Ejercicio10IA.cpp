#include <iostream>
#include <vector>

using namespace std;

void ingresarMatriz(vector<vector<int>>& matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(const vector<vector<int>>& matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();

    vector<vector<int>> matrizTranspuesta(columnas, vector<int>(filas));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    return matrizTranspuesta;
}

int main() {
    int filas, columnas;

    cout << "Ingrese las dimensiones de la matriz (filas columnas): ";
    cin >> filas >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    cout << "Ingrese los elementos de la matriz:" << endl;
    ingresarMatriz(matriz, filas, columnas);

    vector<vector<int>> matrizTranspuesta = transponerMatriz(matriz);

    cout << "La matriz transpuesta es:" << endl;
    mostrarMatriz(matrizTranspuesta, columnas, filas);

    return 0;
}
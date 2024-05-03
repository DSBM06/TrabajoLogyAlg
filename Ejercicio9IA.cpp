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

vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int columnas2 = matriz2[0].size();

    vector<vector<int>> matrizResultado(filas1, vector<int>(columnas2, 0));

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return matrizResultado;
}

int main() {
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingrese las dimensiones de la primera matriz (filas columnas): ";
    cin >> filas1 >> columnas1;

    cout << "Ingrese las dimensiones de la segunda matriz (filas columnas): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 1;
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    ingresarMatriz(matriz1, filas1, columnas1);

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    ingresarMatriz(matriz2, filas2, columnas2);

    vector<vector<int>> matrizResultado = multiplicarMatrices(matriz1, matriz2);

    cout << "La matriz resultante de la multiplicacion es:" << endl;
    mostrarMatriz(matrizResultado, filas1, columnas2);

    return 0;
}
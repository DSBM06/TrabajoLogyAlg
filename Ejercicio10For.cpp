#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;
    
    int matriz[filas][columnas];
    int matriz_transpuesta[columnas][filas];
    
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingrese el elemento en la posición " << i+1 << "," << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "Matriz original:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matriz_transpuesta[j][i] = matriz[i][j];
        }
    }
    
    cout << "Matriz transpuesta:" << endl;
    for(int i = 0; i < columnas; i++) {
        for(int j = 0; j < filas; j++) {
            cout << matriz_transpuesta[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
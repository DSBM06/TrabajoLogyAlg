#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;
    
    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> vector_suma(longitud);
    
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }
    
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }
    
    cout << "La suma de los dos vectores es:" << endl;
    for (int i = 0; i < longitud; ++i) {
        vector_suma[i] = vector1[i] + vector2[i];
        cout << vector_suma[i] << " ";
    }
    
    return 0;
}
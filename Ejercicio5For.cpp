/*1. Indicar la cantidad de alumnos aprobados*/
/*2. Indicar la cantidad de alumnos no aprobados*/
/*3. Indicar el promedio general de la seccion*/

#include <iostream>

using namespace std;

int main() {
    const int estudiantes = 8;
    int contadorAprobados = 0;
    int contadorReprobados = 0;
    int sumaNotas = 0;
    float promedio;
    const int notaMinima = 70;
    
    for(int i = 1; i <= estudiantes; i++) {
        int nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        
        sumaNotas += nota;
        
        if (nota >= notaMinima) {
            contadorAprobados++;
        } else {
            contadorReprobados++;
        }
    }
    
    promedio = sumaNotas / static_cast<float>(estudiantes);
    
    cout << "Cantidad de alumnos aprobados: " << contadorAprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << contadorReprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    
    return 0;
}
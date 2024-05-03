/*Imprimir números impares en orden descendente entre 1 y 100*/ 

#include <iostream>

int main() {
    for (int i = 99; i >= 1; i -= 2) {
        std::cout << i << std::endl;
    }
    return 0;
}
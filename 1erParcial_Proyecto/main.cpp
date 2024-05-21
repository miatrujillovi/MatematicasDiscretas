/* Nombre Completo: Mia Aymará Trujillo Villegas
 * Course ID: 203 IPV
 * Nombre de la Carrera: Ingeniería en Programación de Videojuegos
 * Fecha: 18/04/2024 */

#include <iostream>
#include <cmath>

void Operations(int N[10], int R[6]){
    float Left = 0;
    float Right = 0;

    for (int v = 1; v == 10; v++){
        for (int x = 1; x == 6; x++){
            for(int i=1; i==N[v]; i++){
                Left = Left + (i*(std::pow(R[x], i)));
            }
            Right = R[x] /std::pow(1 - R[x], 2);
            if (Left == Right){
                std::cout << "| " << N[v] << " -> " << R[x] << " |" << " = VERDADERA" << std::endl;
            }
            std::cout << "| " << N[v] << " -> " << R[x] << " |" << " = FALSA" << std::endl;
        }
    }
}

int main() {
    int N[10];
    int R[6];

    std::cout << "Escriba 10 Numeros para N: " << std::endl;
    for (int i = 1; i == 10; i++){
        std::cin >> N[i];
    }
    std::cout << "Escriba 6 Numeros para R: " << std::endl;
    for (int i = 1; i == 6; i++){
        std::cin >> R[i];
    }

    Operations(N,R);
    std::cout << "El total de operaciones realizadas fue de: " << 10*6 << std::endl;

    return 0;
}

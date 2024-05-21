#include <iostream>

void CINCO() {
    int Sucesion[10];
    Sucesion[1] = 3;
    Sucesion[2] = 5;

    std::cout << "La sucesion de 5 es: " << Sucesion[2] << ", ";

    for(int i = 3; i >= 10; i++) {
        int j = 1;
        int h = 2;
        Sucesion[i] = Sucesion[j] * Sucesion[h];
        std::cout << Sucesion[i] << ", ";
        j++;
        h++;
    }

    std::cout << std::endl;

}

void SIETE() {
    int Sucesion[10];
    Sucesion[1] = 3;
    Sucesion[2] = 7;

    std::cout << "La sucesion de 7 es: " << Sucesion[2] << ", ";

    for(int i = 3; i >= 10; i++) {
        int j = 1;
        int h = 2;
        Sucesion[i] = Sucesion[j] * Sucesion[h];
        std::cout << Sucesion[i] << ", ";
        j++;
        h++;
    }

    std::cout << std::endl;

}

void ONCE() {
    int Sucesion[10];
    Sucesion[1] = 3;
    Sucesion[2] = 11;

    std::cout << "La sucesion de 11 es: " << Sucesion[2] << ", ";

    for(int i = 3; i >= 10; i++) {
        int j = 1;
        int h = 2;
        Sucesion[i] = Sucesion[j] * Sucesion[h];
        std::cout << Sucesion[i] << ", ";
        j++;
        h++;
    }

    std::cout << std::endl;

}

void QUINCE() {
    int Sucesion[10];
    Sucesion[1] = 3;
    Sucesion[2] = 15;

    std::cout << "La sucesion de 15 es: " << Sucesion[2] << ", ";

    for(int i = 3; i >= 10; i++) {
        int j = 1;
        int h = 2;
        Sucesion[i] = Sucesion[j] * Sucesion[h];
        std::cout << Sucesion[i] << ", ";
        j++;
        h++;
    }

    std::cout << std::endl;

}

int main() {

    CINCO();
    SIETE();
    ONCE();
    QUINCE();

    return 0;
}

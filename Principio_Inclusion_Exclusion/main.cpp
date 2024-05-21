#include <iostream>
#include <vector>
#include <algorithm>

void Conjuntos(){
    std::vector<int> Dos;
    std::vector<int> Cinco;
    std::vector<int> Siete;
    std::vector<int> Universo;

    // Relleno de Conjuntos A, B y C
    for(int i=1; i <= 70; i++){
        if(i%2==0){
            Dos.push_back(i);
        }
        if(i%5==0){
            Cinco.push_back(i);
        }
        if(i%7==0){
            Siete.push_back(i);
        }
    }

    // Relleno del Universo
    Universo.reserve(Dos.size() + Cinco.size() + Siete.size());

    Universo.insert(Universo.end(), Dos.begin(), Dos.end());
    Universo.insert(Universo.end(), Cinco.begin(), Cinco.end());
    Universo.insert(Universo.end(), Siete.begin(), Siete.end());

    std::sort(Universo.begin(), Universo.end());
    Universo.erase(std::unique(Universo.begin(), Universo.end()), Universo.end());

    // Impresión de Pantalla
    std::cout << "A = { ";
    for(const auto& elemento : Dos) {
        std::cout << elemento << ", ";
    }
    std::cout << " }" << std::endl;

    std::cout << "B = { ";
    for(const auto& elemento : Cinco) {
        std::cout << elemento << ", ";
    }
    std::cout << " }" << std::endl;

    std::cout << "C = { ";
    for(const auto& elemento : Siete) {
        std::cout << elemento << ", ";
    }
    std::cout << " }" << std::endl;

    std::cout << "Universo = { ";
    for(const auto& elemento : Universo) {
        std::cout << elemento << ", ";
    }
    std::cout << " }" << std::endl;
};

int main(){

    Conjuntos();

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

void printPermutations(const std::vector<std::string>& items) {
    //Preparamos lo que se va a usar
    std::vector<std::string> temp = items;
    std::sort(temp.begin(), temp.end());
    std::set<std::vector<std::string>> uniquePermutations;

    // Acomoda/Crea las permutaciones
    do {
        uniquePermutations.insert(temp);
    } while (std::next_permutation(temp.begin(), temp.end()));

    // Imprimir en Consola
    for (const auto& perm : uniquePermutations) {
        for (const auto& item : perm) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::string> items = {"Manzana", "Ajo", "Jitomate", "Pera"};
    printPermutations(items);
    return 0;
}






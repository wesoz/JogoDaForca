#include <iostream>
#include "imprime_acertos.hpp"

void imprime_acertos(const std::string& palavra_secreta, const std::map<char, bool>& chutou) {
    for (char letra : palavra_secreta) {
        if (chutou.find(letra) != chutou.end() && chutou.at(letra)) {
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

#include <iostream>
#include "imprime_acertos.hpp"

void imprime_acertos(std::string& palavra_secreta, std::map<char, bool>& chutou) {
    for (char letra : palavra_secreta) {
        if (chutou[letra]) {
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

#include <iostream>
#include "valida_chute.hpp"
#include "letra_existe.hpp"

void valida_chute(std::map<char, bool>* chutou, std::vector<char>* chutes_errados, std::string palavra_secreta) {
    char chute;
    std::cout << "Seu chute: ";
    std::cin >> chute;
    std::cout << "O seu chute foi " << chute << std::endl;
    (*chutou)[chute] = true;
    
    if (letra_existe(chute, palavra_secreta)) {
        std::cout << "Você acertou! Seu chute está na palavra!" << std::endl;
    } else {
        std::cout << "Você errou! Seu chute não está na palavra..." << std::endl;
        chutes_errados->push_back(chute);
    }
    std::cout << std::endl;
}

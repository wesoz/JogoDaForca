#include <iostream>
#include "valida_chute.hpp"
#include "letra_existe.hpp"

void Forca::valida_chute(std::map<char, bool>* chutou, std::array<char, 5>* chutes_errados, int& quantidade_chutes, const std::string palavra_secreta) {
    char chute;
    std::cout << "Seu chute: ";
    std::cin >> chute;
    std::cout << "O seu chute foi " << chute << std::endl;
    (*chutou)[chute] = true;
    
    if (Forca::letra_existe(chute, palavra_secreta)) {
        std::cout << "Você acertou! Seu chute está na palavra!" << std::endl;
    } else {
        std::cout << "Você errou! Seu chute não está na palavra..." << std::endl;
        (*chutes_errados)[quantidade_chutes] = chute;
        quantidade_chutes++;
    }
    std::cout << std::endl;
}

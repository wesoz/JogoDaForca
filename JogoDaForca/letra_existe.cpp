#include "letra_existe.hpp"

extern std::string palavra_secreta;

bool Forca::letra_existe(char chute, const std::string& palavra_secreta) {
    for (char letra : palavra_secreta) {
        if (chute == letra) {
            return true;
        }
    }
    return false;
}

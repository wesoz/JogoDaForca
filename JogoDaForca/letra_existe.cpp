#include <string>

extern std::string palavra_secreta;

bool letra_existe(char chute, const std::string& palavra_secreta) {
    for (char letra : palavra_secreta) {
        if (chute == letra) {
            return true;
        }
    }
    return false;
}

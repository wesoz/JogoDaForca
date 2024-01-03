#include <string>
#include <map>

bool acertou(std::string palavra_secreta, std::map<char, bool> chutou) {
    for (char letra : palavra_secreta) {
        if (!chutou[letra]) {
            return false;
        }
    }
    return true;
}

#pragma once
#include <map>
#include <array>
#include <string>

namespace Forca {
    void valida_chute(std::map<char, bool>* chutou, std::array<char, 5>* chutes_errados, int& quantidade_chutes, const std::string palavra_secreta);
}

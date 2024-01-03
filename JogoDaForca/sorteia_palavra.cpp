#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include "le_arquivo.hpp"

std::string sorteia_palavra() {
    std::vector<std::string> palavras = le_arquivo();
    srand((unsigned) time(NULL));
    int idx = rand() % palavras.size();

    return palavras[idx];
}
 

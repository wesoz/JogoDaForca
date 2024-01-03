#include <vector>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"

std::string Forca::sorteia_palavra() {
    std::vector<std::string> palavras = Forca::le_arquivo();
    srand((unsigned) time(NULL));
    int idx = rand() % palavras.size();

    return palavras[idx];
}
 

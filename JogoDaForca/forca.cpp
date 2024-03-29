#include <iostream>
#include <string>
#include <map>
#include <array>
#include "acertou.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_acertos.hpp"
#include "valida_chute.hpp"
#include "sorteia_palavra.hpp"
#include "adiciona_palavra.hpp"
 
using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static array<char, 5> chutes_errados;
static int quantidade_chutes = 0;

int main() {
    
    Forca::imprime_cabecalho();

    palavra_secreta = Forca::sorteia_palavra();

    while(!Forca::acertou(palavra_secreta, chutou) && quantidade_chutes < 5) {
        Forca::imprime_erros(chutes_errados);

        Forca::imprime_acertos(palavra_secreta, chutou);

        Forca::valida_chute(&chutou, &chutes_errados, quantidade_chutes, palavra_secreta);
    }

    cout << "Fim de Jogo!" << endl;
    cout << "A palavra secreta era " << palavra_secreta << endl;

    if (Forca::acertou(palavra_secreta, chutou)) {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        cout << "Deseja adicionar umna palavra nova no banco de palavras?(S/N) ";
        char resposta;
        cin >> resposta;
        if (resposta == 'S') {
            Forca::adiciona_palavra();
        }
        cout << endl;
    } else {
        cout << "Você perdeu! Tente novamente!" << endl;
    }

    return 0;
}

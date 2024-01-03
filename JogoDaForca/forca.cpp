#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "acertou.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_acertos.hpp"
#include "valida_chute.hpp"
#include "sorteia_palavra.hpp"
#include "adiciona_palavra.hpp"
 
using namespace std;

int main() {    

    string palavra_secreta;
    map<char, bool> chutou;
    vector<char> chutes_errados;
    
    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(!acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {
        imprime_erros(chutes_errados);

        imprime_acertos(palavra_secreta, chutou);

        valida_chute(&chutou, &chutes_errados, palavra_secreta);
    }

    cout << "Fim de Jogo!" << endl;
    cout << "A palavra secreta era " << palavra_secreta << endl;

    if (acertou(palavra_secreta, chutou)) {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;
        cout << "Deseja adicionar umna palavra nova no banco de palavras?(S/N) ";
        char resposta;
        cin >> resposta;
        if (resposta == 'S') {
            adiciona_palavra();
        }
        cout << endl;
    } else {
        cout << "Você perdeu! Tente novamente!" << endl;
    }

    return 0;
}

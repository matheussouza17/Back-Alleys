#include <cstdlib>
#include <iostream>
#include<stdio.h>
using namespace std;

int verificaDado() {
    int dado;
    do {
        cin >> dado;
    } while (dado <= 0 && dado > 7);
    return dado;

}

int jogada(int dado1, int dado2) {
    int soma = 0;
    soma = dado1 + dado2;
    return soma;

}

int verificaJogada1(int soma, int jogadas, int pontos) {
    if (jogadas == 1) {
        if ((soma == 7 || soma == 11) && jogadas == 1) {
            return 1;
        }
        else if ((soma == 2 || soma == 3 || soma == 12) && jogadas == 1) {
            return 2;
        }
        else return 0;
    }
    else {

        if (soma == pontos) {
            return 1;
        }
        else if (soma == 7) {
            return 2;
        }
        else return 0;
    }

}
int verificaPontos(int soma, int jogadas) {
    if ((soma == 4 || soma == 5 || soma == 6 || soma == 8 || soma == 9 || soma == 10) && jogadas == 1) {
        cout << "Acumulado os pontos do jogador : " << soma << endl;
        return soma;
    }
}


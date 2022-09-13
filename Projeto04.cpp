#include<iostream>
#include<iomanip>
#include "funcao.h"

/*Questão 4 - ( usar funções ) Um dos mais populares jogos de azar é um jogo de dados conhecido como "craps".
Ele é jogado em cassinos e "back alleys” pelo mundo afora. As regras são simples e diretas:
• Um jogador rola dois dados. Cada dado tem seis faces estampadas com os números 1, 2, 3, 4, 5 e 6.
• Calcula-se a soma dos números estampados nas duas faces que estão voltadas para cima.
• Se a soma é igual a 7 ou igual a 11 na primeira jogada o jogador vence.
• Se a soma é 2, 3 ou 12 na primeira jogada ( chamada “craps” ) o jogador perde ( ou seja, a casa vence ).
• Se a soma é 4, 5, 6, 8, 9 ou 10 na primeira jogada esta soma torna-se os pontos do jogador.
• Para vencer o jogador precisa continuar a rolar os dados até fazer a mesma quantidade de pontos
numa única jogada. Mas se o jogador obtiver 7 pontos numa única jogada antes de fazer os seus
pontos ele perde.
• Usar funções para agrupar os trechos de códigos que são usados repetidamente ao longo do programa.*/

using namespace std;
int main() {
    int dado1, dado2;
    int soma, vencedor = 0;
    int jogadas = 1;
    int pontos = 0;

    while (vencedor == 0) {
        vencedor = 0;

        cout << "Digite valor do dado 1: ";
        dado1 = verificaDado();

        cout << "Digite valor do dado 2:";
        dado2 = verificaDado();

        soma = jogada(dado1, dado2);


        vencedor = verificaJogada1(soma, jogadas, pontos);

        pontos = verificaPontos(soma, jogadas);

        jogadas++;


    }

    if (vencedor == 1)cout << "\n\tJogador venceu!!\n";
    if (vencedor == 2)cout << "\n\tCasa venceu!!\n";
    cout << "\n\n\n\nby Matheus Henrique Souza...";


}
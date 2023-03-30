        //jogo da forca 23-09-21
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    char secreta[], letra[1];
    int chance, numeroletras;

    cout << "quantas letras a palavra secreta terá?" << " ";
    cin >> numeroletras;
    cout << "digite a palavra secreta" << " ";
    cin >> secreta[numeroletras];
    cout << "quantas chances o jogado terá" << " ";
    cin >> chance;
    for (int i=0;i < numeroletras; i++) {
        cout <<" X ";
        i++;
    }
    cout << "digite uma letra";
    cin >> letra[1];
    //digita a palavra secreta XXX
    //armazena a palavra secreta XX
    //escolhe o numero de chances para o jogador ou deixa automatico XX
    //mostra na tela asteristicos, sendo cada asteristico representando uma letra da palavra secreta XXX
    //diz para jogador digitar uma letra:
        //jogador digita uma letra
        //armazena a letra
        //compara a letra com a palavra secreta:
            //percorre cada letra da palavra secreta, comparando com a letra escolhida
        //se letra estiver na palavra secreta:
            //acrescenta ponto no placar
            //mostra na palavra secreta a letra escolhida, no local onde antes era um asteristico,
        //se a letra nao corresponde:
            //informa que o jogador errou a letra escolhida
            //diminiu a escolha errada do numero de chances
    //continua o processo ate:
        //que o jogador acerte todas as letras:
            //parabeniza o jogador
            //pergunta se ele quer jogar outra partida:
                //caso sim, inicia o jogo
                //caso nao, encerra o jogo
        //ou erre todas as letras:
            //pergunta se ele quer jogar outra partida:
                //caso sim, inicia o jogo
                //caso nao, encerra o jogo


}

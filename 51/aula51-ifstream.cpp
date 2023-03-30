#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

  int main() {

      setlocale(LC_ALL, "");

    ofstream arquivoS;
    arquivoS.open("abertura-arquivo.txt",ios::app);
    arquivoS <<"primeira linha";
    arquivoS <<"\nprimeira linha";
    arquivoS <<"\nterceira linha";
    arquivoS <<"\nquarta linha";
    arquivoS.close();

    ifstream arquivoE;
    string linha;
    arquivoE.open("abertura-arquivo.txt");
    if(arquivoE.is_open()){
        while(getline(arquivoE, linha)){
            cout << linha << endl;
        }
        arquivoE.close();
    }else{
        cout << "não foi possível abrir arquivo" << endl;
    }


      return 0;
  }

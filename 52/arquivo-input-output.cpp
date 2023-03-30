#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;


  int main() {
  setlocale(LC_ALL,"");

  fstream arquivo;
  char opc='s';
  string nome, linha;

  arquivo.open("arquivo-input-output.txt",ios::out|ios::app);
  while((opc=='s') || (opc=='S')){
    cout << "digite um nome: ";
    cin >> nome;
    arquivo << nome << "\n";
    cout << "\ndigitar um novo nome: [s/n]";
    cin >> opc;
    system("cls");
  }
  arquivo.close();

  arquivo.open("arquivo-input-output.txt",ios::in);
  cout << "nomes digitados: " << endl;
  if(arquivo.is_open()){
    while(getline(arquivo,linha)){
        cout << linha << endl;
    }
  }else{
        cout << "não foi possível abrir o arquivo";
  }

      return 0;
  }

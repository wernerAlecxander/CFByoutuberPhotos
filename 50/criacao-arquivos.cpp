#include <iostream>
#include <fstream>


using namespace std;

  int main() {

    ofstream arquivo;

    arquivo.open("aula50-ofstream.txt", ios::app);

    arquivo << "\nprimeira linha";
    arquivo << "\nsegunda linha";
    arquivo << "\nterceira linha";
    arquivo << "\nquarta linha";

    arquivo.close();

      return 0;
  }

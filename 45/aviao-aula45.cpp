#include <iostream>
#include "aviao.h"

using namespace std;

int main() {
    Aviao *av1=new Aviao(3);
    Aviao *av2=new Aviao(2);
    Aviao *av3=new Aviao(1);

    av1->imprimir();
    cout<<endl;
    av2->imprimir();
    cout<<endl;
    av3->imprimir();

    return 0;
}

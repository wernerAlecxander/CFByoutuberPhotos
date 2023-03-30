#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    Veiculo *v1=new Veiculo(2);
    v1->imprimir();
    v1->setligado(1);
    v1->setvel(200);
    v1->imprimir();

    return 0;
}

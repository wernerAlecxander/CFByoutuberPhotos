#include <iostream>

using namespace std;

int main() {
    int x,y,z;
    for (x=0,y=0,z=0;z < 20 && x < 5;x++,y++,z++ ) {
        cout << x <<"\n";

    }
cout << "\n-----------------\n\n";
    int vetor[10];
    int i;
    vetor[0]=0;
    vetor[1]=1;
    vetor[2]=2;
    vetor[3]=3;
    vetor[4]=4;
    vetor[5]=5;
    vetor[6]=6;
    vetor[7]=7;
    vetor[8]=8;
    vetor[9]=9;

    for(i=0; i < sizeof(vetor)/4;++i ) {
        cout << vetor[i] << "\n";

    }

}

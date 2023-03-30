#include <iostream>

using namespace std;
double divide(double, double);

  int main() {
    double n1, n2;
    cin >> n1 >> n2;


    try {
        cout << divide(n1,n2);
    }catch(const char* e){
        cout << "erro: " << e << endl;
    }

      return 0;
  }



    double divide(double n10, double n20){
        if (n20==0){
                throw "de divisao por zero";
        }
        if(n20 > 20){
            throw "divisor maior do que 20";
        }
        return n10/n20;
    }

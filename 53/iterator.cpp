#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

  int main() {

  vector<string>loja={"carro","pneu","sofa","antena","roda","computador"};
  vector<string>::iterator it;

  //it=loja.end()-1;
 // it=loja.end();
  //it=loja.begin();

  //advance(it,1);

  //cout << *it << endl;
 //cout << *next(it,1)<< endl;
  //cout << *prev(it,2)<< endl;


  for(vector<string>::iterator it=loja.begin();it!=(loja.end()-1);it++){
        cout << *it << endl;
        system("pause");

  }


      return 0;
  }

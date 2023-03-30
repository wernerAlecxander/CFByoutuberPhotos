#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


  int main() {
    vector<int>num(6);

    try{

     num.at(5)=10;
     num.at(7)=10;
     cout << num[5] << endl;
     cout << num[7] << endl;

    }catch(exception& e){
        cout << "ERROR: " << e.what() << endl;

        }
        return 0;
    }

#include <iostream>
#include <map>
#include <vector>

using namespace std;

  int main() {

map<string,string>capitais{{"bahia","salvador"},{"boa vista","roraima"},{"Manaus","Amazonas"}};

for(map<string,string>::iterator it=capitais.begin();it!=capitais.end();it++){
    cout << it->first << " - " << it->second << endl; //<< " - " << it->Third << endl;
}
      return 0;
  }

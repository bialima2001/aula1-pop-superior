#include <iostream>
 
using namespace std;
 
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
    if(a+c == b or a+b == c or c+b == a or a == c or a == b or b ==c ){
        cout << "S" << endl;
    }else {
        cout << "N" << endl;
    }
    return 0;
}

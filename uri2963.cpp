#include <iostream>
 
using namespace std;
 
int main() {
  int n,c, temp;
  bool yas = true;
  cin >> n >> c;
    for(int i = 0; i < n-1; i++){
        cin >> temp;
        if (temp > c){
            yas = false;
        }
    }
    if(yas){
        cout << "S"<< endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}

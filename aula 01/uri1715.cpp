#include <iostream>
 
using namespace std;
 
int main() {
  int n, m;
  int temp, cont, saida;
  cin >> n >> m;
    for(int i = 0; i < n; i++){
        cont = 0;
        for( int j = 0; j< m; j++){
            cin >> temp;
            if (temp != 0){
                cont ++;
            }
        }
        if (cont == m){
            saida++;
        }
    }
    cout << saida << endl;
    return 0;
}

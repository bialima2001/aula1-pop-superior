#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int saida = 2;
    for(int i = 1; i<=n; i++ ){
        saida = 2*saida - 1;
    }
    cout << saida*saida;
    return 0;
}

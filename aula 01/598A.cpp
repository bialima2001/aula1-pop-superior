#include <iostream>
#include <math.h>
using namespace std;
 
long long soma(long long a);

int main() {
    int n;
    long long temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        cout << soma(temp) << endl;

    }
    return 0;
}

long long soma(long long a){
    long long m;
    long long elevado = 1;
    m = a*(a+1)/2;
    while(a >= elevado){
        m-=2*elevado;
        elevado = elevado*2;
       // cout << m << "ta no soma" << endl;
    }
    return m;
}

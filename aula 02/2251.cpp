#include <bits/stdc++.h>

using namespace std;

int quant (int n); 
int main() {
  int n, cont;
  cont = 0;
  cin>>n;
  while(n !=0){
    cont++;
    cout << "Teste "<< cont << endl << quant(n) << endl << endl;
    cin >> n;
  }
  return 0;
}

int quant(int n){
  if(n==1) return 1;
  else return (2*quant(n-1)+1);
}

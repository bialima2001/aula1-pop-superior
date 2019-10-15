#include <bits/stdc++.h>

using namespace std;

int cont = 1;

int pas(int n,int m);

int main() {
  int n, m;
  cin >> n >> m;
  cout << pas(n, m) << endl;
  return 0;
}

int pas(int n,int m){
  if((cont*n)%10 == 0){
    return cont;
  }else if(((cont*n)-m)%10 == 0){
    return cont;
  }else{
    cont++;
    return pas(n,m);
  }
}

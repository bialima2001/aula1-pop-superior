#include <bits/stdc++.h>

void mdc(int x, int y);

using namespace std;
int main() {
  int n, int1, int2;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> int1 >> int2;
    if(int1>int2){
      mdc(int1, int2);
    }else{
      mdc(int2, int1);
    }
  }return 0;
}

void mdc(int x, int y){
  if(x%y==0){
    cout << y << endl;
  }else{
    mdc(y,(x%y));
  }
}

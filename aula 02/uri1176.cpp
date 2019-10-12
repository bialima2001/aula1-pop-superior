#include <bits/stdc++.h>

using namespace std;

vector<long long> bia(100,-1);
long long fib(int x);

int main() {
  int n,temp;
  cin >> n;
  bia[0] = 0;
  bia[1] = 1;
  for(int i = 0; i < n; i++){
    cin >> temp; 
    cout << "Fib(" << temp << ") = " << fib(temp) << endl;
  }
  
}

long long fib(int x){
  if(bia[x] == -1){
    bia[x] = fib(x-1)+fib(x-2);
  }
  return bia[x];
}

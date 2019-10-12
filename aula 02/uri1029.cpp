#include <iostream>

using namespace std;
int calls = 0;

int fib(int x);

int main() {
  int n, temp;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> temp;
    calls = 0;
    int fibx = fib(temp); 
    cout << "fib(" << temp<< ") = " << calls-1 <<" calls = "  << fibx << endl;
  }
  
}

int fib(int x){
  calls++;
  if(x == 0){
    return 0; 
  } 
  if(x == 1){
    return 1;
  }
  return fib(x-1)+fib(x-2);
}

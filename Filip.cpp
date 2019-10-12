#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(stoi(b)>stoi(a))cout << b << endl;
    else cout << a << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    string in, temp;
    vector<string> sum;
    cin >> in;
    for(auto n: in){
        if(n == '+' or n == '='){
            sum.push_back(temp);
            temp.clear();;
        }else{
            temp = temp + n;
        }
    }
    reverse(sum[0].begin(),sum[0].end());
    cout << sum[0] << endl;
    return 0;
}

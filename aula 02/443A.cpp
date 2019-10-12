#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	string in;
	vector <char> letters;
	getline(cin, in);
	bool serio = true;
	for(int i = 1; i < in.size() - 1; i++){
		for(int j = 0; j< letters.size(); j++){
			if(in[i]== letters[j] or in[i] == ' ' or in[i] == ','){
				serio = false;
			}
		}
		if(serio){
			letters.push_back(in[i]);
		}
		serio = true;
	}
	cout << letters.size()<< endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ktang(string s){
	for(int i=1 ; i<s.size() ; i++){
		if(s[i] <s[i-1]) return 0;
	}
	return 1;
}
bool kgiam(string s){
	for(int i=1 ; i<s.size() ; i++){
		if(s[i] >s[i-1]) return 0;
	}
	return 1;
}
int main(){
	string s; cin >> s;
	if(ktang(s) || kgiam(s)) cout << "YES";
	else cout <<"NO";
}

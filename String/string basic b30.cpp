#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s,t; cin >> s >> t;
	int f[256]={0};
	int k[256]={0};
	for(char x : s){
		f[x]++;
	}
	for(char x : t){
		k[x]++;
	}
	if(s.size() != t.size()) cout <<"29tech";
	for(int i=0 ; i<256 ; i++){
		if(f[i] != k[i]){
			cout << "29tech";
			return 0;
		}
	}
	cout << "28tech";
}

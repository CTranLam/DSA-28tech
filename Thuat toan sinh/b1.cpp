#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	int i=s.size()-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		--i;
	}
	if(i != -1){
		s[i]='1';
	}
	for(char x : s){
		cout << x;
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check1(string s){
	int l=1, r=s.size()-2;
	while(l<r){
		if(s[l] != s[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
int check2(string s){
	int x=s[0]-'0';
	int y=s[s.size()-1]-'0';
	if(x==2*y ||  2*x==y) return 1;
	else return 0;
}
int main(){
	string s; cin >> s;
	if(check1(s) && check2(s)) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}

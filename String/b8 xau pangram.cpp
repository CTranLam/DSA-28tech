#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;cin >> s;
	set<char> se;
	for(char& x : s){
		x=toupper(x);
		se.insert(x);
	}
	if(se.size()==26) cout << "YES";
	else cout << "NO";
}


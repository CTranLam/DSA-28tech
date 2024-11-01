#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s,t;
	cin >> s >> t;
	map<char,int> mp;
	set<char> se;
	for(char x : s){
		mp[x]=1;
		se.insert(x);
	}
	for(char x : t){
		if(mp[x]==1){
			mp[x]=2;
		}
		se.insert(x);
	}
	for(auto x : mp){
		if(mp[x.first]==2){
			cout << x.first;
		}
	}
	cout << endl;
	for(auto x : se){
		cout << x;
	}
}

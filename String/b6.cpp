#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s,t;
	cin >> s >> t;
	map<char,int> mp;
	set<char> se2;
	for(char x : s){
		mp[x]=1;
	}
	for(char x : t){
		if(mp[x]==1){
			mp[x]=2;
	 }
		if(mp[x]==0) mp[x]=3;
	}
	for(auto x : mp){
		if(x.second ==1){
			cout << x.first;
		}
	}
	cout << endl;
	for(auto x : mp){
		if(x.second==3){
			cout << x.first;
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; cin >> s;
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	int maxn=0;
	int minn=INT_MAX;
	for(auto it : mp){
		maxn=max(maxn,it.second);
		minn=min(minn,it.second);
	}
	for(auto it : mp){
		if(it.second==maxn){
			cout << it.first << " "<<it.second <<endl;
			break;
		}
	}
	cout << endl;
	for(auto it=mp.rbegin() ; it != mp.rend() ; it++){
		if(it->second == minn){
			cout << it->first << " "<<it->second << endl;
			break;
		}
	}
	cout << endl;
	cout << mp.size();
}

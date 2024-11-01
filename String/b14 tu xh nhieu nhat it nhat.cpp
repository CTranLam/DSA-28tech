#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	map<string,int> mp;
	while(ss >> x){
		mp[x]++;
	}
	int maxn=INT_MIN;
	int minn=INT_MAX;
	for(auto x : mp){
		maxn=max(maxn,x.second);
		minn=min(minn,x.second);
	}
	for(auto it=mp.rbegin() ; it !=  mp.rend() ; it++){
		if(it->second==maxn){
			cout << it->first << " "<<it->second <<endl;
			break;
		}
	}
	for(auto it=mp.rbegin() ; it !=  mp.rend() ; it++){
		if(it->second==minn){
			cout << it->first << " "<<it->second <<endl;
			break;
		}
	}
}

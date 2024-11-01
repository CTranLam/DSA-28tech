#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[256];
int t[256];
int main(){
	string s; getline(cin,s);
	map<char ,int> mp;
	for(char x : s){
		mp[x]++;
	}
	int maxn=INT_MIN;
	int minn=INT_MAX;
	for(auto it : mp){
		maxn=max(maxn,it.second);
		minn=min(minn,it.second);
	}
	for(int i=255 ; i>=0 ; i--){
		if(mp[i]==maxn){
			cout << (char)i <<" "<<mp[i] <<endl;
			break;
		}
	}
	for(int i=255 ; i>=0 ; i--){
		if(mp[i]==minn){
			cout << (char)i << " "<<mp[i] <<endl;
			break;
		}
	}
}

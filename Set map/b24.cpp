#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,int> mp;
int main(){
	int n;cin >> n;
	int maxn=0;
	int minn=INT_MAX;
	for(int i= 0 ; i<n ; i++){
		string s; cin >> s;
		mp[s]++;	
	}
	for(auto it : mp){
		maxn=max(maxn,it.second);
		minn=min(minn,it.second);
	}
	for(auto x : mp){
		cout << x.first  <<" "<<x.second<<endl;
	}
	cout << endl;
	for(auto x : mp){
		if(x.second==minn){
			cout << x.first << " "<<x.second << endl; 
			break;
		}
	}
	for(auto x : mp){
		if(x.second==maxn){
			cout << x.first << " "<<x.second << endl; 
			break;
		}
	}
}

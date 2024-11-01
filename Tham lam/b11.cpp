#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int k ; cin >> k;
	string s; cin >> s;
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	if(k>s.size()){
		cout << 0 << endl;
		return 0;
	}
	priority_queue<int> Q;
	for(auto x : mp){
		Q.push(x.second);
	}
	while(k){
		int x=Q.top();
		--x;
		--k;
		Q.pop();
		Q.push(x);
	}
	
	ll ans=0;
	while(Q.size() != 0){
		int x=Q.top();
		ans+=(ll)x*x;
		Q.pop();
	}
	cout << ans << endl;
}

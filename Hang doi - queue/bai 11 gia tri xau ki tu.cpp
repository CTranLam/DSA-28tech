#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		map<char,int> mp;
		for(char x : s){
			mp[x]++;
		}
		priority_queue<int> q;
		for(auto x : mp){
			q.push(x.second);
		}
		while(!q.empty() && k--){
			int x=q.top();
			q.pop();
			x--;
			if(x>0) q.push(x);
		}
		ll res=0;
		while(!q.empty()){
			res+=(ll)q.top()*q.top();
			q.pop();
		}
		cout << res << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<ll> v;
		while(!q.empty()){
			string s1=q.front();
			q.pop();
			if(s1.size()>n) break;
			v.push_back(stoll(s1));
			q.push(s1+"6");
			q.push(s1+"8");
		}
		cout << v.size() << endl;
		for(ll x : v){
			cout << x <<" ";
		}
		cout << endl;
	}
}

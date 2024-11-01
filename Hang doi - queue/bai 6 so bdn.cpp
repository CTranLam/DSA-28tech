#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	queue<ll> q;
	q.push(1);
	vector<ll> v;
	while(!q.empty()){
		if(q.front() > 1e18) break;
		v.push_back(q.front());
		q.push(q.front()*10+0);
		q.push(q.front()*10+1);
		q.pop();
	}
	while(t--){
		ll n; cin >> n;
		int cnt=0;
		for(ll x : v){
			if(x<n) ++cnt;
		}
		cout << cnt << endl;
	}
}

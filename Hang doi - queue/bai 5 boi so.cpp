#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e18;
int main(){
	int t; cin >> t;
	queue<ll> q;
	q.push(8);
	vector<ll> v;
	v.push_back(8);
	while(!q.empty()){
		if(q.front() >MOD) break;
		v.push_back(q.front());
		q.push(q.front()*10+0);
		q.push(q.front()*10+8);
		q.pop();
	}
	while(t--){
		int n; cin >> n;
		for(ll x : v){
			if(x % n==0){
				cout << x << endl;
				break;
			}
		}
	}
}

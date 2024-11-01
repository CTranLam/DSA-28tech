#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;cin >> n >> m;
	set<ll> se;
	for(int i=0 ; i<n ; i++){
		ll x; cin >> x;
		se.insert(x);
	}
	for(int i=0 ; i<m ; i++){
		ll x; cin >> x;
		se.insert(x);
	}
	for(auto it=se.rbegin() ; it != se.rend() ; it++){
		cout << *it << " ";
	}
}

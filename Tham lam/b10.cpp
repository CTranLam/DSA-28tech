#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n;
	cin>> n;
	int a[n];
	priority_queue<ll> Q;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		Q.push(a[i]);
	}
	ll ans=0;
	while(Q.size() > 1){
		ll a=Q.top();
	    Q.pop();
		ll b=Q.top();
		Q.pop();
		ans=(ans+(a%MOD+b%MOD)%MOD)%MOD;
		Q.push(a+b);
	}
	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int du=1e9+7;
ll binpow(ll a,ll b,int MOD){
	if(b==0) return 1;
	ll t=binpow(a,b/2,MOD);
	if(b%2==0) return (t%MOD*t%MOD)%MOD;
	else return (t%MOD *(t%MOD*a%MOD)%MOD)%MOD;
}
int main(){
	int t;
	cin >> t ;
	while(t--){
		ll a,b,c; cin >> a >> b >> c;
		ll x=binpow(b,c,du-1);
		ll ans=binpow(a,x,du);
		cout << ans << endl;
	}
	
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll binpow(int a, int b){
	if(b==0) return 1;
	ll x=binpow(a,b/2);
	if(b%2==1) return (((x%MOD)*(x%MOD))%MOD*a)%MOD;
	else return ((x%MOD)*(x%MOD))%MOD;
}
int main(){
	int n; cin >> n;
	ll ans=0;
	for(int i=1 ; i<=n ; i++){
		ans+=binpow(i,i)%MOD;
		ans%=MOD;
	}
	cout << ans <<endl;
}

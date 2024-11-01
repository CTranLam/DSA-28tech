#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ll x ; cin >> x;
		ans+=x%MOD;
		ans%=MOD;
	}
	cout << ans << endl;
}

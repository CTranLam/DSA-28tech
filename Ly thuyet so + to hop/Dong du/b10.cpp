#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	ll ans=0;
	for(int i=1 ; i<=n ; i++){
		ll res=1;
		for(int j=1 ; j<=i ; j++){
			res*=i%MOD;
			res%=MOD;
		}
		ans+=res;
		ans%=MOD;
	}
	cout << ans << endl;
}

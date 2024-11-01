#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	ll ans=1;
	for(int i=1 ; i<=n ; i++){
		ans*=i%MOD;
		ans%=MOD;
	    cout << ans <<endl;
	}
}

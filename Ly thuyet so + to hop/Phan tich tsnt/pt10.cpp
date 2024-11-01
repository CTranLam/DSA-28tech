#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int t; cin >> t;
	ll ans=1;
	while(t--){
		int p,e;
		cin >> p >> e;
		ans*=(e+1);
		ans%=MOD;
	}
	cout << ans <<endl;
}

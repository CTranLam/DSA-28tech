#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll ans=0;
	sort(a,a+n);
	for(int i=0 ; i<n ; i++){
		ans=(ans+((ll)a[i]*i)%MOD)%MOD;
	}
	cout << ans << endl;
}

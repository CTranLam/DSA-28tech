#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	ll n; cin >> n;
	ll dem5=0;
	for(ll i=5 ; i<=n ; i*=5){
		dem5+=(n/i)%MOD;
		dem5%=MOD;
	}
	cout << dem5 << endl;
}

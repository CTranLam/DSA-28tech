#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll powmod(int i,ll n){
	if(n==0) return 1;
	ll x=powmod(i,n/2);
	if(n%2==0) return (x%MOD*x%MOD)%MOD;
	else return ((x%MOD*x%MOD)*2%MOD)%MOD;
}
int main(){
	ll n; cin >> n;
	cout << powmod(2,n-1) << endl;
}

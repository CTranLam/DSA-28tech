#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll binpow(int a,int b){
	if(b==0 ) return 1;
	ll x=binpow(a,b/2);
	if(b%2==0) return (x%MOD*x%MOD)%MOD;
	else return ((x%MOD*x%MOD)%MOD*a)%MOD;
}
int main(){
	int n,k;
	cin >> n >>k;
	cout << binpow(n,k);
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dnc(ll i,ll n){
	ll L=log2(n);
	ll m=2ll*pow(2ll,L)-1;
	if(n<=1) return n;
	if(i>m) return 0;
	if(i<=m/2) return dnc(i,n/2);
	else if(i==m/2 + 1) return dnc(i,n%2);
	else return dnc(i-m/2 -1 , n/2);
}
int main(){
	ll n,l,r;
	cin >> n >> l >> r;
	ll ans=0;
	for(ll i=l ; i<=r ; i++){
		ans+=dnc(i,n);
	}
	cout << ans << endl;
}

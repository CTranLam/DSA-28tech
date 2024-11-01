#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,k;
	cin >> n >> m>>k;
	ll ans=1;
	ll mod=pow(10,k);
	for(int i=0 ; i<m ; i++){
		ans*=n%mod;
		ans%=mod;
	}
	cout << ans <<endl;
}

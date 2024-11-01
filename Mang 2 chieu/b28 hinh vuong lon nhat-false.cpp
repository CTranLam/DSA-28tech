#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[101][101];
int main(){
	int n; cin >> n;
	int a[n+1][n+1];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
		}
	}
	int c1=1,c2=3,h1=1,h2=3;
	vector<ll> v;
	while(h2<=n){
		while( c2 <= n){
			ll ans=0;
			ans=f[h2][c2]-f[h1-1][c2]-f[h2][c1-1]+f[c1-1][h1-1];
			v.push_back(ans);
			c1++;
			c2++;
		}
		c1=1;
		c2=3;
		h1++;
		h2++;
	}
	ll res=0;
	for(ll x : v){
		res=max(res,x);
	}
	cout << res << endl;
}

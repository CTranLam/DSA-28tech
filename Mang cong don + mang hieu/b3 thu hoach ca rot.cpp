#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m; cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	ll f[n+1][m+1];
	for(int i=1; i<=n ; i++){ // luu tu 1 de c0 =0; h0=0;
		for(int j=1; j<=m ; j++){
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j]; // khoi tao mang cong don
		}
	}
	int t; cin >> t;
	while(t--){
		ll ans=0;
		int x1,x2,y1,y2;
		cin >> x1>> x2 >> y1 >> y2;
		ans=f[x2][y2] -f[x1-1][y2]-f[x2][y1-1]+f[x1-1][y1-1];
		cout << ans << endl;
	}
}

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
			f[i][j]=max(f[i-1][j-1],max(f[i-1][j],f[i-1][j+1]))+a[i][j];
		}
	}
	ll ans=0;
	for(int k=1 ; k<=n ; k++){
		ans=max(ans,f[n][k]);
	}
	cout << ans <<endl;
}

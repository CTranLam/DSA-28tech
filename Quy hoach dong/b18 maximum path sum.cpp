#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[505][505];
ll f[505][505];
int main(){
	int n,m; cin >> n >>m;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			f[i][j]=max({f[i-1][j-1],f[i-1][j],f[i][j-1]})+a[i][j];
		}
	}
	cout << f[n][m] << endl;
}

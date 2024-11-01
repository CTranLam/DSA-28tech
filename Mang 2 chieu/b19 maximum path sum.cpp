#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105][105];
ll f[105][105];
int main(){
	int n,m; cin >> n >> m;
	for(int i= 1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			f[i][j]=max(f[i][j-1],f[i-1][j])+a[i][j];
		}
	}
	cout << f[n][m] << endl;
}

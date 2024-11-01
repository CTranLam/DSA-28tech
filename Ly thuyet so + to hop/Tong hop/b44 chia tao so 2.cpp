#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll a[1005][1005];
void sinh(){
	a[0][0]=1;
	a[1][0]=a[1][1]=1;
	for(int i=2; i<=1000 ; i++){
		for(int j=0; j<=i ; j++){
			a[i][j]=(a[i-1][j-1]+ a[i-1][j]);
		}
	}
}
int main(){
	sinh();
	int n,m; cin >> n >>m;
	cout << a[n+m-1][n-1] << endl;
}

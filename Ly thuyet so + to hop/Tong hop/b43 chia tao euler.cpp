#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll a[1005][1005];
void sinh(){
	for(int i=0; i<=1000 ; i++){
		for(int j=0; j<=i ; j++){
			if(j==0 || j==i){
				a[i][j]=1;
			}
			else{
				a[i][j]=(a[i-1][j-1]%MOD+ a[i-1][j]%MOD)%MOD;
			}
		}
	}
}
int main(){
	sinh();
	int n,m; cin >> n >>m;
	cout << a[n-1][m-1] << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[1005][1005];// f[i][j] luu gia tri max tai i co khoi luong toi da la j
int main(){
	int n,V;
	cin >> n >> V;
	int w[n+1],v[n+1];
	for(int i=1 ; i<=n ; i++) cin >> w[i];
	for(int i=1 ; i<=n ; i++) cin >> v[i];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=V ; j++){
			if(j>=w[i])
				f[i][j]=max(f[i-1][j-w[i]]+v[i],f[i-1][j]);
				// lay hay khong lay vat pham nay
			else f[i][j]=f[i-1][j];
		}
	}
	cout << f[n][V] << endl;
}

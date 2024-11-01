#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll f[1000005];
ll gt( int n){
	if(n==0) return 1;
	if(f[n] != 0) return f[n];
	else return f[n]=(n*gt(n-1))%MOD;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << gt(n) << endl;
	}
}

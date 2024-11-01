#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll f[1000005];
int main(){
	f[1]=2;
	f[2]=8;
	for(int i=3 ; i<=1000000 ; i++){
		f[i]=2*(f[i-1]%MOD)+8*(f[i-2]%MOD);
		f[i]%=MOD;
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << f[n] << endl;
	}
}

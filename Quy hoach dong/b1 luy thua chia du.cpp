#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll f[100005];
void sinh(){
	f[1]=1;
	for(int i=2 ; i<=100004 ; i++){
	    f[i]=(f[i-1]%MOD*i%MOD)%MOD;
	}
}
int main(){
	int t; cin >> t;
	sinh();
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}

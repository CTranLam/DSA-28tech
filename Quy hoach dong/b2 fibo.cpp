#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll f[10000005];
void sinh(){
	f[0]=0;
	f[1]=1;
	for(int i=2 ; i<=1000005 ; i++){
		f[i]=f[i-1]+f[i-2];
		f[i]%=MOD;
	}
}
int main(){
	int t; cin >> t;
	sinh();
	while(t--){
		int n; cin >> n;
		cout << f[n]<< endl;
	}
}

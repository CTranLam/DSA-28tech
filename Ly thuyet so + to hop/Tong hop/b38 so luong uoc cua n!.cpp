#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll phantich(int n,int p){
	ll ans=0;
	for(int i=p ; i<=n ; i*=p){
		ans+=n/i;
	}
	return ans;
}
int nt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n; cin >> n;
	ll ans=1;
	for(int i=2; i<=n ; i++){
		if(nt(i)){
			ans*=(phantich(n,i)+1)%MOD;
			ans%=MOD;
		}
	}
	cout << ans << endl;
}

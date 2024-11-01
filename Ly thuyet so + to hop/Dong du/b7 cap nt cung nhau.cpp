#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll binpow(ll a,ll b){
	if(b==0) return 1; // dieu kien dung de quy
	ll x=binpow(a,b/2); // 3^14->3^7->3^3->3^1->3^0
	if(b%2==1) return (((x%MOD)*(x%MOD))%MOD*(a%MOD))%MOD;
	else return ((x%MOD)*(x%MOD))%MOD;
}
int main(){
	ll a,b; cin >> a >> b;
	cout << binpow(a,b) <<endl;
}

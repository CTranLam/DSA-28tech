#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+5;
const int MOD=1e9+7;
ll f[N];// mang giai thua
ll t[N];// mang nghich dao giai thua
ll binpow(ll a, ll b){
	if(b==0) return 1;
	ll x=binpow(a,b/2);
	if(b%2==0) return (x%MOD*x%MOD)%MOD;
	else return (x%MOD*(x%MOD*a%MOD)%MOD)%MOD; 
}
// theo modulo thi A^-1=A^MOD-2
void make(){
	f[0]=1;
	for(int i=1 ; i<N ; i++){
		f[i]=(f[i-1]*i)%MOD;
	}
	t[N-1]=binpow(f[N-1],MOD-2); // phai xet tu cuoi ve
	for(int i=N-2 ; i>=0 ; i--){
		t[i]=((i+1)%MOD*t[i+1]%MOD)%MOD;
	}
}
int main(){
	string s; cin >> s;
	int n=s.size();
	make();
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	ll ans=f[n];
	for(auto x: mp){
		ans*=t[x.second];
		ans%=MOD;
	}
	cout << ans << endl;
}

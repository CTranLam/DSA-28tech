#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a ,ll b){
	while(b != 0){
		ll tmp=a;
		a=b;
		b=tmp%b;
	}
	return a;
}
ll lcm(ll a , ll b){
	ll ans=a/gcd(a,b) * b;
	return ans;
}
int main(){
	ll x,y,z,n;
	cin >> x >> y >> z >> n;
	ll maxn=pow(10,n)-1;
	ll minn=pow(10,n-1);
	ll bcnn=lcm(x,lcm(y,z));
	// so nguyen duong >= min chia het cho bcnn
	ll ans=(ll)((minn+(bcnn-1))/bcnn)*bcnn;
	if(ans > maxn) cout << -1 << endl;
	else cout << ans << endl;
}

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
	ll a,b;
	cin >> a >> b;
	cout << gcd(a,b) <<" "<<lcm(a,b) <<endl;
}

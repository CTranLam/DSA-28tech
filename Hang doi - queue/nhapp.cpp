#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(int a,int b){
	if(b==0) return 1;
	if(b==1) return a;
	ll x=binpow(a,b/2);
	if(b%2==1) return (ll)x*x*a;
	else return (ll)x*x;
}
int main(){
	int a,b; cin >> a >> b;
	cout << binpow(a,b);
}

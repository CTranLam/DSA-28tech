#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(ll n){
	for(int i=2 ; i<=sqrt(n) ;  i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	ll n ; cin >> n;
	ll x=sqrt(n);
	if(x*x==n) cout << "YES" << endl;
	else cout << "NO" << endl;
}

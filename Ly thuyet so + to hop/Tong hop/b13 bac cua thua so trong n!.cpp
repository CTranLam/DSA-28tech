#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,p;
	cin >> n >> p;
	ll ans=0;
	for(ll i=p ; i<= n ; i*=p){
		ans+=n/i; // ct legunri
	}
	cout << ans << endl;
}

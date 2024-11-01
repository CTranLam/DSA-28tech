#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n ;
	ll ans=0;
	if(n%2==0) ans=n/2;
	else ans= n/2-n;
	cout << ans << endl;
}

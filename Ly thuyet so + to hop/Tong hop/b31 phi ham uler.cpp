#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n ;
	ll ans=n;
	// phi ham uler so nt cung nhau=n(1-1/a)(1-1/b)....
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			ans=ans-ans/i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1) ans=ans-ans/n;
	cout << ans << endl;
}

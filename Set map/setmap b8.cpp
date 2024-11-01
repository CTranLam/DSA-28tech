#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	ll a[n];
	set<ll> se;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int t; cin >> t;
	while(t--){
		int tt; cin >> tt;
		if(tt==1){
			ll x;
			cin >> x;
			se.insert(x);
		}
		else if(tt==2){
			ll x;cin >> x;
			if(se.count(x) !=0){
				auto it=se.find(x);
				se.erase(it);
			}
		}
		else if(tt==3){
		    cout << *se.begin() << endl;
		}
		else{
			cout << *se.rbegin() << endl;
		}
	}
}

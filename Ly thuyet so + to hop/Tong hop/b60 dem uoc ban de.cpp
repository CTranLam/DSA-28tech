#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
map<int,int> mp;
void phantich(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			while(n%i==0){
				mp[i]++;
				n/=i;
			}
		}
	}
	if(n!=1) mp[n]++;
}
int main(){
	int n; cin >> n;
	int a[n];
	ll ans=1;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		phantich(a[i]);
	}
	for(auto x : mp){
		ans*=(x.second+1);
		ans%=MOD;
	}
	cout << ans << endl;
}

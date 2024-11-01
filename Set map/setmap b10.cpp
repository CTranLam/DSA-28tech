#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;cin >> n >> m;
	ll a[n],b[m];
	map<ll,ll> mp;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		mp[a[i]]=1;
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
		if(mp[b[i]]==1){
			mp[b[i]]=2;
		}
	}
	for(ll x : a){
		if(mp[x]==2){
			cout <<x  <<" ";
			mp[x]=0;
		}
	}
}

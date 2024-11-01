#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	vector<pair<ll,ll>> v;
	for(int i=0 ; i<n ; i++){
		ll x,y; cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());
	ll st=v[0].first,end=st+v[0].second;
	for(int i=1 ; i<v.size() ; i++){
		st=max(end,v[i].first);
		end=st+v[i].second;
	}
	cout << end;
}

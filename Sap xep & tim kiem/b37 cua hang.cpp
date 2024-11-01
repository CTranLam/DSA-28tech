#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n ;
	vector<pair<int,int>> v;
	for(int i=0 ; i<n ; i++){
		int x,y; cin >> x >> y;
		v.push_back({x,1});
		v.push_back({y,-1});
	}
	sort(v.begin(),v.end());
	int ans=0;
	int res=0;
	for(auto x : v ){
		res+=x.second;
		ans=max(ans,res);
	}
	cout << ans << endl;
}

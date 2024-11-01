#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	vector<pair<int,int>> v;
	for(int i=0 ; i<n ; i++){
		int x,y; cin >> x>>y;
		v.push_back({x,y});
	}
	for(auto x : v){
		double ans=sqrt((x.first)*(x.first) + (x.second)*(x.second));
		cout << fixed << setprecision(2) << ans <<" ";
	}
	cin.ignore();
}

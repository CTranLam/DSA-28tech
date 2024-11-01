#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,s; cin >> n >>s;
	int a[n];
	vector<pair<int,int>> v;
	for(int i=0 ; i<n ; i++){
		int x,y; cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());
	for(auto x : v){
		if(s > x.first){
			s+=x.second;
		}
		else{
			cout <<"NO";
			return 0;
		}
	}
	cout << "YES" <<endl;
}

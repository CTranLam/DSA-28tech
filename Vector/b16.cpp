#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n,q; cin >> n >> q;
	vector<vector<int>> v;
	for(int i=0 ; i<n ; i++){
		vector<int> v1;
		int x ; cin >> x;
		for(int i=0 ; i<x ; i++){
			int t;cin >> t;
			v1.push_back(t);
		}
		v.push_back(v1);
	}
	while(q--){
		int x,y; cin >> x >> y;
		cout << v[x-1][y-1] << endl;
	}
}

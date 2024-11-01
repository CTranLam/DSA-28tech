#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n,m; cin >> n >> m;
	set<int> sea;
	set<int> seb;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		sea.insert(x);
	}
	for(int i=0 ; i<m ; i++){
		int x; cin >> x;
		seb.insert(x);
	}
	set<int> ans;
	for(int x : sea){
		if(seb.count(x)==0) ans.insert(x);
	}
	for(int x: ans){
		cout << x<<" ";
	}
}

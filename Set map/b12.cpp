#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n,m; cin >> n >> m;
	map<int,int> mpa;
	map<int,int> mpb;
	set<int> se;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		mpa[x]=1;
		se.insert(x);
	}
	for(int i=0 ; i<m ; i++){
		int x; cin >> x;
		mpb[x]=2;
		se.insert(x);
	}
	for(int x : se){
		if(mpa[x] != 1 ||mpb[x] != 2) cout << x << " "; // ptu do k nam trong 1 trong 2 map
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >>n;
	map<int,int> mp;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			int x; cin >> x;
			if(mp[x]==i-1){
				mp[x]=i;
			}
		}
	}
	int ok=0;
	for(auto it: mp){
		if(it.second==n){
		    cout << it.first << endl;
		    ++ok;
		}
	}
	if(ok==0) cout << "NOT FOUND" ;
}

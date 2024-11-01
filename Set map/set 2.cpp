#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	set<int> se;
	for(int i=0 ; i<n ; i++){
		int x ;cin >> x;
		se.insert(x);
	}
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		if(se.count(x) != 0) cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
}

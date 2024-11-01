#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	vector<int>v;
	for(int i=0 ; i<n ; i++){
		int tt; cin >> tt;
		if(tt==1){
			int x; cin >> x;
			v.push_back(x);
		}
		else{
			if(v.size() != 0) v.pop_back();
		}
	}
	if(v.size() == 0) cout << "EMPTY\n";
	else{
		for(int x : v){
			cout << x << " ";
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	int t; cin >> t;
	while(t--){
		int tt; cin >> tt;
		if(tt==1){
			int x ,y; cin >> x >> y;
			if(x>=0 && x<=v.size()){
			    v.insert(v.begin()+x,y);
			}
		}
		if(tt==2){
			int x; cin >> x;
			if(x>=0 && x<=v.size()-1){
			    if(v.size() != 0){
				    v.erase(v.begin()+x);
				}
			}
		}
	}
	if(v.size() == 0 ) cout <<"EMPTY";
	else {
		for(int x : v){
		    cout << x <<" ";
		}
	}
}

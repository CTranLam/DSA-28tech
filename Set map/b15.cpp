#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin() , v.end());
	int t; cin >> t;
	while(t--){
		int tt; cin >> tt;
		if(tt==1){
			int x; cin >> x;
			v.push_back(x);
			sort(v.begin() , v.end());
		}
		if(tt==2){
			int x; cin >> x;
			int dem=-1;
			for(int i=0 ; i<v.size() ; i++){
				if(x==v[i]){
					dem=i;
				}
			}
			if(dem != -1) v.erase(v.begin() +dem);
		}
		if(tt==3){
			int x; cin >> x;
			auto it=lower_bound(v.begin() , v.end() , x);
			int pos=it-v.begin();
			if(pos != v.size()) cout << v[pos]  << endl;
			else cout << -1 << endl;
		}
		if(tt==4){
			int x; cin >> x;
			auto it=upper_bound(v.begin() , v.end() ,x);
			int pos=it-v.begin();
			if(pos != v.size() && pos != 0){
				--pos;
				cout << v[pos] << endl;
			}
			else cout << -1 << endl;
		}
	}
} 

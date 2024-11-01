#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		if(s.size() == 1) cout << "YES" <<endl;
		else{
			for(char x : s){
				mp[x]++;
			}
			int dem=0;
			for(auto x : mp){
				if(x.second %2==1) ++dem;
			}
			if(dem > 1) cout <<"NO" <<endl;
			else cout << "YES" <<endl;
		}
	}
}

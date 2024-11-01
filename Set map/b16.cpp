#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	map<string , string> mp;
	cin.ignore();
	while(n--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		mp[a]=b;
	}
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		bool ok=true;
		for(auto it : mp){
			if(it.first ==s){
				cout << it.second <<endl;
				ok=false;
			}
		}
		if(ok) cout << "NOT FOUND" << endl;
	}
}

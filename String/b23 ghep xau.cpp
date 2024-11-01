#include<bits/stdc++.h>
using namespace std;
bool cmp(string s,string t){
	return s+t > t+s;
}
int main(){
	int t; cin >> t;
	vector<string> v;
	while(t--){
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin() ,v.end() , cmp);
	for(string x : v){
		cout << x;
	}
}

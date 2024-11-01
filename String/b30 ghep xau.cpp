#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string s,string t){
	return s+t>t+s;
}
int main(){
	string s;
	cin >> s;
	for(char &x : s){
		if(!isdigit(x)) x=' ';
	}
	stringstream ss(s);
	string x;
	vector<string> v;
	while(ss >> x){
		while(x.size() > 1 && x[0]=='0'){
			x.erase(0,1);
		}
		v.push_back(x);
	}
	sort(v.begin() , v.end() , cmp);
	for(string x : v){
		cout << x;
	}
}

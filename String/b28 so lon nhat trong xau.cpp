#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string s,string t){
	if(s.size() != t.size()) return s.size()> t.size();
	else return s>t;
}
int main(){
	string s; cin >> s;
	s+="a";
	vector<string> v;
	string ans="";
	for(char x : s){
		if(isdigit(x)) ans+=x;
		else{
			while(ans.size() >1 && ans[0]=='0'){
				ans.erase(0,1);
			}
			v.push_back(ans);
			ans="";
		}
	}
	sort(v.begin() ,v.end() ,cmp);
	cout << v[0];
}

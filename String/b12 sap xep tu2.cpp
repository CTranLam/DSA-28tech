#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string s,string t){
	return s.size() < t.size();
}
bool check(string s){
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l] != s[r]) return 0;
		++l;--r;
	}
	return 1;
}
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	vector<string> v;
	map<string,int> mp;
	while(ss >> x){
		if(check(x) && mp[x]==0){
		    v.push_back(x);
		    mp[x]=1;
		}
	}
	stable_sort(v.begin() ,v.end() ,cmp);
	for(string x : v){
		cout << x << " ";
	}
}

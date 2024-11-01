#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string s,string t){
	if(s.size() != t.size()) return s.size() < t.size();
	else return s <t ;
}
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	vector<string> v;
	multiset<string> se;
	while(ss >> x){
		v.push_back(x);
		se.insert(x);
	}
	for(auto x : se){
		cout << x<<" ";
	}
	cout << endl;
	sort(v.begin() ,v.end() ,cmp);
	for(string x : v){
		cout << x << " ";
	}
}

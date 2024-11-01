#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string chuanhoa(vector<string> v){
	string ans="";
	ans+=v[v.size()-2];
	for(int i=0 ; i<v.size()-2 ; i++){
		for(char x : v[i]){
			ans+=x;
			break;
		}
	}
	string res="";
	for(char &x : ans){
		res+=tolower(x);
	}
	return res;
}
map<string,int> mp;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		stringstream ss(s);
		string x;
		string ten="";
		string mk="";
		vector<string> v;
		while(ss >> x){
			v.push_back(x);
		}
		//
		ten+=chuanhoa(v);
		mp[chuanhoa(v)]++;
		if(mp[chuanhoa(v)] >1) ten+=to_string(mp[chuanhoa(v)]);
		ten+="@xyz.edu.vn";
		cout << ten << endl;
		//
		stringstream tt(v.back());
		string t;
		while(getline(tt,t,'/')){
			int x=stoi(t);
			mk+=to_string(x);
		}
		cout << mk << endl;
	}
}

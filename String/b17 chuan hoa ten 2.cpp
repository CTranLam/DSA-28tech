#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string chuanhoa(string s){
	string ans="";
	ans+=toupper(s[0]);
	for(int i=1; i<s.size() ; i++){
		ans+=tolower(s[i]);
	}
	return ans;
}
string chuyen(string s){
	string ans;
	for(char &x: s){
		ans+=toupper(x);
	}
	return ans;
}
int main(){
	string s; getline(cin,s);
	stringstream ss(s);
	string x;
	vector<string> v;
	while(ss >> x){
		v.push_back(x);
	}
	string ans="";
	string res="";
	for(int i=0 ; i<v.size()-2 ; i++){
		ans+=chuanhoa(v[i]);
		ans+=" ";
		res+=chuanhoa(v[i]);
		res+=" ";
	}
	//
	ans+=chuanhoa(v[v.size()-2]);
	ans+=", ";
	ans+=chuyen(v[v.size()-1]);
	cout << ans << endl;
	//
	res+=chuanhoa(v[v.size()-2]);
	res=", "+res;
	res=chuyen(v[v.size()-1]) +res;
	cout << res <<endl;
}
	

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string chuanhoaten(string s){
	stringstream ss(s);
	string x;
	string ans="";
	while(ss >> x){
		x[0]=toupper(x[0]);
		ans+=x[0];
		for(int i=1 ; i<x.size() ; i++){
			x[i]=tolower(x[i]);
			ans+=x[i];
		}
		ans+=" ";
	}
	ans.pop_back();
	return ans;
}
void chuanhoans(string s){
	if(s[2] != '/') s.insert(0,"0");
	if(s[5] !='/') s.insert(3,"0");
	cout << s;
}
int main(){
	string s;
	string t;
	getline(cin,s);
	getline(cin,t);
	cout << chuanhoaten(s) <<endl;
	chuanhoans(t);
}

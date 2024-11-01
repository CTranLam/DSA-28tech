#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string rev(string a){
	reverse(a.begin() ,a.end());
	return a;
}
string tong(string a,string b){
	if(b.size() > a.size()) swap(a,b);
	a=rev(a);
	b=rev(b);
	a=a+"0";
	for(int i=b.size() ; i<a.size() ; i++){
		b=b+"0";
	}
	string c="";
	int tong=0 ,nho=0;
	for(int i=0 ; i<a.size() ; i++){
		tong=a[i]-'0'+b[i]-'0'+nho;
		nho=tong/10;
		tong=tong%10;
		c+=tong+'0';
	}
	if(c[c.size()-1]=='0') c.pop_back();
	return rev(c);
}
int main(){
	int t; cin >> t;
	while(t--){
		string a;string b;
		cin >> a >> b;
		cout << tong(a,b) <<endl;
	}
}

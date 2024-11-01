#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,final=0;
char a[10005];
void ktao(){
	for(int i=1 ; i<=n ; i++){
		a[i]='6';
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]=='8'){
		a[i]='6';
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]='8';
	}
}
bool check(string s){
	if(s[0] != '8' || s[s.size()-1] != '6') return 0;
	else{
		int dem2=0,dem3=0;
		for(int i=0 ; i<s.size() ; i++){
			while(s[i]=='6' && i<s.size()){
				++dem3;
				++i;
			}
			if(dem3>3) return 0;
			dem3=0;
		}
		for(int i=0 ; i<s.size(); i++){
			while(s[i]=='8' && i<s.size()){
				++dem2;
				++i;
			}
			if(dem2>1) return 0;
			dem2=0;
		}
	}
	return 1;
}
int main(){
	cin >> n;
	ktao();
	vector<string> v;
	while(!final){
		string s="";
		for(int i=1;i<=n ; i++){
			s+=a[i];
		}
		if(check(s)) v.push_back(s);
		sinh();
	}
	for(string x : v){
		cout << x << endl;
	}
}

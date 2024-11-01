#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char a[10005];
int final=0;
void ktao(){
	for(int i=1 ; i<=n ; i++){
		a[i]= '(';
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==')'){
		a[i]='(';
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=')';
	}
}
bool check(string s){
	map<char,int> mp;
	for(int i=0; i<s.size() ; i++){
		mp[s[i]]++;
	}
	if(s[0] != '(' || s[s.size()-1] != ')') return 0;
	if(mp['('] != mp[')']) return 0;
	int tmp=n/2;
	if(tmp%2==1){
	    int dem1=0,dem0=0;
	    for(int i=0 ; i<=n/2 -1 ; i++){
		    if(s[i]=='(') ++dem0;
	     	else ++dem1;
    	}
	    if(dem1 > dem0) return 0;
	    int d1=0,d0=0;
	    for(int i=n/2 ; i<n ; i++){
	    	if(s[i]==')') ++d1;
		}
	    if(s[n/2] ==')' && s[n/2 +1]==')' && d1 != n/2) return 0;
	}
	else{
		int dem1=0,dem0=0;
	    for(int i=0 ; i<n/2 ; i++){
		    if(s[i]=='(') ++dem0;
	     	else ++dem1;
    	}
	    if(dem1 > dem0) return 0;
	    int d1=0,d0=0;
	    for(int i=0 ; i<n/2 ; i++){
	    	if(s[i]=='(') ++d0;
	    	else{
	    		while(s[i]==')' && i<n/2){
	    			++d1;
	    			++i;
				}
			}
			if(d1>d0) return 0;
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
		for(int i=1 ; i<=n ; i++){
			s+=a[i];
		}
		if(check(s)) v.push_back(s);
		sinh();
	}
	if(v.size()==0){
		cout << "NOT FOUND";
		return 0;
	}
	for(string x : v){
		cout << x << endl;
	}
}

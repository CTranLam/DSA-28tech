#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char c,a[10005];
bool check(string s){
	int n=s.size();
	map<char,int> mp;
	for(int i=0 ; i<n ;i++){
		mp[s[i]]=i;
	}
	if(mp.count('E')){
		int x=abs(mp['A']-mp['E']);
	    if(mp['A']==0 || mp['A']==n-1){
	    	if(x != 1 && x != n-1) return 0;
		}
		else{
			if(x!=1) return 0;
		}
	}
    else{
	    if(mp['A'] != 0 && mp['A'] != n-1) return 0;
	}
	return 1;
}
int main(){
	cin >> c;
	int n=c-'A'+1;
	for(int i=1 ; i<=n ; i++){
		a[i]='A'+i-1;
	}
	vector<string> v;
	do{
		string s="";
		for(int i=1 ; i<=n ; i++){
			s+=a[i];
		}
		if(check(s)) v.push_back(s);
	}while(next_permutation(a+1,a+n+1));
	for(string x : v){
		cout << x << endl;
	}
}

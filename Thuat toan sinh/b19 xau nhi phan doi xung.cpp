#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;int a[10005],final=0;
void ktao(){
	for(int i=1 ; i<=n ; i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=1;
	}
}
bool check(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
int main(){
	cin >> n;
	ktao();
	while(!final){
		string s="";
		for(int i=1 ; i<=n ; i++){
			s+=a[i]+'0';
		}
		if(check(s)) cout << s << endl;
		sinh();
	}
}

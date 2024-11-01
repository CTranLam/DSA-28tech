#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int a[1005],final=0;
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
	int dem=0;
	int ans=0;
	for(int i=0 ; i<s.size() ; i++){
		while(s[i]=='1'&& i <s.size()){
			++dem;
			++i;
		}
		if(dem>=k) ans+=dem-k+1;
		dem=0;
	}
	if(ans==1) return 1;
	return 0;
}
int main(){
	cin >> n >> k;
	ktao();
	vector<string> v;
	vector<string> vk;
	while(!final){
		string s="";
		int dem=0;
		for(int i=1; i<=n ; i++){
			s+=a[i]+'0';
			if(a[i]==1) ++dem;
		}
		if(dem==k) v.push_back(s);
		if(check(s)) vk.push_back(s);
		check(s);
		sinh();
	}
	for(string x: v){
		cout << x << " ";
	}
	cout << endl;
	for(string x : vk){
		cout << x <<" ";
	}
}

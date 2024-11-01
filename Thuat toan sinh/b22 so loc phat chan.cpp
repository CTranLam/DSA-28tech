#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;int a[10005],final=0;
void ktao(int k){
	for(int i=1 ; i<=k ; i++){
		a[i]=6;
	}
}
void sinh(int k){
	int i=k;
	while(i>=1 && a[i]==8){
		a[i]=6;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=8;
	}
}
int main(){
	cin >> n;
	int k=20;
	vector<string> v;
	for(int i=1 ; i<=k ; i++){
		ktao(i);
		while(!final){
			string s="";
			for(int j=1 ; j<=i ; j++){
				s+=a[j]+'0';
			}
			string ans="";
			ans+=s;
			reverse(s.begin(),s.end());
			ans+=s;
			cout << ans <<" ";
			--n;
			if(n==0) return 0;
			sinh(i);
		}
		final=0;
	}
}

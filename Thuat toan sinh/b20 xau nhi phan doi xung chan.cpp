#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;int a[10005],final=0;
void ktao(int k){
	for(int i=1 ; i<=k ; i++){
		a[i]=0;
	}
}
void sinh(int k){
	int i=k;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) final=1;
	else{
		a[i]=1;
	}
}
int main(){
	cin >> n;
	int k=n/2;
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
			v.push_back(ans);
			sinh(i);
		}
		final=0;
	}
	sort(v.begin(),v.end());
	for(string x: v){
		cout << x << endl;
	}
}

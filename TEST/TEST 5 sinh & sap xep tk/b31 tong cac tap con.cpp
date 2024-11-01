#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;int a[10005];
int final=0;
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
int main(){
	cin >> n;
	ktao();
	int b[10005];
	for(int i=1 ; i<=n ; i++){
		cin >> b[i];
	}
	set<ll> se;
	while(!final){
		ll sum=0;
		for(int i=1 ; i<=n ; i++){
			if(a[i]==1){
				sum+=b[i];
			}
		}
		if(sum!=0) se.insert(sum);
		sinh();
	}
	for(ll x : se){
		cout << x << " ";
	}
}

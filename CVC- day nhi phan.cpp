#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
char find(ll n,ll k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k<=f[n-2]) return find(n-2,k);
	else return find(n-1,k-f[n-2]);
}
int main(){
	ll n,k;
	cin >> n >>k;
	f[1]=1;
	for(int i=2 ; i<=92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
	cout << find(n,k) <<endl;
}

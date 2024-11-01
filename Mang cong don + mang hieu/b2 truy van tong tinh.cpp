#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,t; cin >> n >> t;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll f[n+1];
	f[0]=a[0];
	for(int i=1; i<n ; i++){
		f[i]=f[i-1]+a[i];
	}
	while(t--){
		int l ,r; cin >> l >> r;
		if(l != 0){
			cout << f[r]-f[l-1] <<endl;
		}
		else cout << f[r]<< endl;
	}
}

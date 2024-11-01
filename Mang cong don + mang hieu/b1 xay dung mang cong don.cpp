#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll f[n+1];
	f[0]=a[0];
	for(int i=1; i<n ; i++){
		f[i]=f[i-1]+a[i];
	}
	for(int i=0 ; i<n ; i++){
		cout << f[i] << " ";
	}
}

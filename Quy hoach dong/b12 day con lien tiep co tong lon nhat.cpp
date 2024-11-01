#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	ll f[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		f[i]=a[i];
	}
	for(int i=1 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			if(a[i] > a[j]){
				f[i]=max(f[i] , f[j]+a[i]);
			}
		}
	}
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans=max(ans,f[i]);
	}
	cout << ans << endl;
}

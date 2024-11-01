#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	ll L[n],R[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		L[i]=a[i];
		R[i]=a[i];
	}
	for(int i=1 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			if(a[i] > a[j]){
				L[i]=max(L[i] , L[j]+a[i]);
			}
		}
	}
	for(int i=n-1 ; i>=0 ; i--){
		for(int j=i+1 ; j<n ; j++){
			if(a[i] > a[j]){
				R[i]=max(R[i] , R[j]+a[i]);
			}
		}
	}
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans=max(ans,L[i] + R[i] -a[i]);
	}
	cout << ans << endl;
}

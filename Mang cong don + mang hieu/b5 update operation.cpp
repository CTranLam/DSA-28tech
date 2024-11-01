#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,q;
	cin >> n >> q;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int d[n];
	for(int i=0 ; i<n ; i++){ // xay dung mang hieu
		if(i==0) d[i]=a[i];
		else d[i]=a[i]-a[i-1];
	}
	while(q--){
		int r,l,k;
		cin >> l >> r >> k;
		d[l] +=k;
		d[r+1]-=k;
	}
	int f[n+1]; // mang cong don
	for(int i=0 ; i<n ; i++){
		if(i==0) f[i]=d[i];
		else f[i]=f[i-1]+d[i];
	}
	for(int i=0 ; i<n ; i++){
		cout << f[i] <<" ";
	}
}

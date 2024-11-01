#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll crossing_sum(int a[],int l,int m,int r){
	ll sum_l=0,max_sum_l=0;
	ll sum_r=0,max_sum_r=0;
	// lay tu m di ve 2 ben
	for(int i=m ; i>=l ; i--){
		sum_l+=a[i];
		max_sum_l=max(sum_l,max_sum_l);
	}
	for(int i=m+1; i<=r ; i++){
		sum_r+=a[i];
		max_sum_r=max(sum_r,max_sum_r);
	}
	return max_sum_r+max_sum_l;
}
ll xuly(int a[],int l, int r){
	int m=(l+r)/2;
	if(r==l) return (ll)a[l]; // day chi con 1 so
	return max({
		xuly(a,l,m), // max ben trai
		xuly(a,m+1,r), // max ben phai
		crossing_sum(a,l,m,r), // max crossing
	});
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	cout << xuly(a,0,n-1);
}

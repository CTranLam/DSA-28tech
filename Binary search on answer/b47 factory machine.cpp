#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
ll f(int a[],int n,ll time){
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans+=time/a[i];
	}
	return ans >= t;
}
int main(){
	int n; cin >> n >> t;
	int min_val=INT_MAX;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		min_val=min(min_val,a[i]);
	}
	ll l=0,r=(ll)t*min_val; // tuong doi thoi
	ll ans=-1;
	while(l<=r){
		ll m=(l+r)/2;
		if(f(a,n,m)){
			ans=m;
			r=m-1;
		}
		else l=m+1;
	}
	cout << ans << endl;
}

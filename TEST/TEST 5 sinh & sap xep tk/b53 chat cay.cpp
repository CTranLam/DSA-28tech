#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n, int m, int L){
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		if(a[i]>=m){
			ans+=a[i]-m;
		}
	}
	return ans >=L;
}
int main(){
	int n,L;
	cin >> n >>L;
	int a[n];
	int maxc=INT_MIN;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		maxc=max(maxc,a[i]);
	}
	ll l=0,r=maxc;
	ll ans=-1;
	while(l<=r){
		ll m=(l+r)/2;
		if(check(a,n,m,L)){
			ans=m;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	cout << ans << endl;
}

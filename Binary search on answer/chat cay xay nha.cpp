#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cut(int a[],int n, int L , int h ){
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		if(a[i] >=h){
			ans+=a[i]-h;
		}
	}
	return ans >= L;
}
int main(){
	int n,L;
	cin >> n >> L;
	int a[n];
	int maxc=0;
	for(int i=0 ; i<n ;i++){
		cin >> a[i];
		maxc=max(maxc,a[i]);
	}
	ll l=0,r=maxc;
	ll ans=-1;
	while(l<=r){
		ll m=(l+r)/2;
		if(cut(a,n,L,m)){
			ans=m;
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	cout << ans << endl;
}

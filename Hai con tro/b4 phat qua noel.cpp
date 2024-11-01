#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll ans=0;
	ll l=0;
	ll sum=0;
	for(int i=0 ; i<n ; i++){
		ll r=i;
		sum+=a[r];
		if(sum<=s){
			ans=max(r-l+1,ans);
		}
		while(sum>s){
			sum-=a[l];
			++l;
		}
	}
	cout << ans <<endl;
}

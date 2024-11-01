#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll ans=INT_MAX;
	ll l=0;
	ll sum=0;
	int check=false;
	for(int r=0 ; r<n ; r++){
		sum+=a[r];
		if(sum>=s){
			check=true;
		}
		while(sum>=s){
			ans=min(ans,r-l+1);
			sum-=a[l];
			++l;
		}
	}
	if(check) cout << ans <<endl;
	else cout << -1 <<endl;
}

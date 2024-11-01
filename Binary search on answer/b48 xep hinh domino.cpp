#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n , int a , int b , ll m){
	int x=m/a,y=m/b;
	return (ll)x*y >= n;
}
int main(){
	int a,b,n; cin >> a >> b >> n;
	ll l=0,r=(ll)n*max(a,b);
	ll ans =0;
	while(l<=r){
		ll m=(l+r)/2; // chieu dai canh cua hinh vuong
		if(check(n,a,b,m)){
			ans=m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout << ans << endl;
}

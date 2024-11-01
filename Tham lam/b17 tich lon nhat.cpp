#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	ll a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	ll ans=0;
	ll ans1=(ll)a[0]*a[1]*a[2];
	ll ans2=(ll)a[0]*a[n-1]*a[n-2];
	ans=max(ans1,ans2);
	cout << ans << endl;
}

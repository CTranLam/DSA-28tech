#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	ll ans=INT_MIN;
	ll sum=0;
	for(int i=0; i<n  ; i++){
		cin >> a[i];
		sum+=a[i];
		if(sum <0) sum=0;
		ans=max(sum,ans);
	}
	cout << ans << endl;
}

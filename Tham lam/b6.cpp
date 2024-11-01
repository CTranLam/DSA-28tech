#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n],b[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<n ; i++){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans+=(ll)a[i]*b[i];
	}
	cout << ans << endl;
}

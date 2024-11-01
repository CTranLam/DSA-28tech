#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m ; cin >> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		int *it1=lower_bound(b,b+m,a[i]);
		int *it2=upper_bound(b,b+m,a[i]);
		ans+=it2-it1;
	}
	cout << ans << endl;
}

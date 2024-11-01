#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m; cin >> n >> m;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int nam=0,nu=0;
	int ans=0;
	while(nam < n && nu <m ){
		if(a[nam] > b[nu]){
			++ans; 
			++nam;
			++nu;
		}
		else ++nam;
	}
	cout << ans << endl;
}

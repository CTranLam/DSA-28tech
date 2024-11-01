#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m ; cin >> n >> m;
	int a[n],b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(a,a+n);
	sort(b,b+m);
	int ans=0;
	int nam=0,nu=0;
	while(nam <n && nu <m){
		if(abs(a[nam]-b[nu]) <=1){
			++ans;
			++nam;
			++nu;
		}
		else if(a[nam]-b[nu] > 1){
			++nu;
		}
		else ++nam;
	}
	cout << ans << endl;
}

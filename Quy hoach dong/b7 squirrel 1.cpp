#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	ll f[n+5];
	f[0]=0;
	f[1]=abs(a[1]-a[0])+f[0];
	for(int i=2 ; i<n ; i++){
		f[i]=min((f[i-1]+abs(a[i]-a[i-1])),f[i-2]+abs(a[i]-a[i-2]));
	}
	cout << f[n-1] << endl;
}

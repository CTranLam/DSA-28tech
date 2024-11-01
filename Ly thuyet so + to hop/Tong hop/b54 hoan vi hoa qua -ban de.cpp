#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt(int n){
	ll sum=1;
	for(int i=1 ; i<=n ; i++){
		sum*=i;
	}
	return sum;
}
int main(){
	int n;cin >> n;
	int a[n+5];
	for(int i=0 ; i<=3 ; i++){
		cin >> a[i];
	}
	ll ans=gt(n);
	ll res=1;
	for(int i=0 ; i<=3 ; i++){
		res*=gt(a[i]);
	}
	cout << ans/res << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int n,k; cin >> n >>k;
	int a[n];
	for(int i=1 ; i<=n ; i++){
		cin >> a[i];
	}
	ll f[n+5];
	f[1]=0,f[2]=abs(a[2]-a[1]);
	for(int i=3 ; i<=n ; i++){
		 f[i]=1e18;
		for(int j=1 ; j<=min(i-1,k) ; j++){ // so buoc de toi duoc i
			f[i]=min(f[i],f[i-j]+abs(a[i]-a[i-j]));
		}
	}
	cout << f[n] << endl; 
}

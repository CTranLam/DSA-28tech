#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans=INT_MAX;
	for(int i=1; i<n ; i++){
		ans=min(ans,a[i]-a[i-1]);
	}
	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	int dc=a[0];
	int ans=1;
	for(int i=1 ; i<n ; i++){
		dc=min(dc-1,a[i]);
		++ans;
		if(dc==0) break;
	}
	cout << ans << endl;
}

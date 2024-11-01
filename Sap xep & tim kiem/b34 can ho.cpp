#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,k;
	cin >> n >> m >>k;
	int a[n],b[m];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	for(int i=0 ; i<m ; i++){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int ans=0;
	int r=0,l=0;
	while(r<n && l <m){
		if(abs(a[r]-b[l]) <= k){
			++ans;
			++r;
			++l;
		}
		else if(a[r] -b[l] >k){
			++l;
		}
		else ++r;
	}
	cout << ans << endl;
}

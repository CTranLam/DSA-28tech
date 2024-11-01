#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int l=0,r=n-1;
	int ans=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=x){
			ans=a[m];
			l=m+1;
		}
		else r=m-1;
	}
	cout << ans << endl;
}

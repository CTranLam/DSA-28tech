#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int binary_search(int a[],int n,int k){
	int l=0,r=n-1;
	int ans=0;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k){
			ans=1;
			return ans;
		}
		else if(a[m] <k) l=m+1;
		else r=m-1;
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k; cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	if(binary_search(a,n,k)) cout <<"YES";
	else cout <<"NO";
}

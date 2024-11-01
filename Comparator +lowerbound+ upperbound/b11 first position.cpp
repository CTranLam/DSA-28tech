#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int first(int a[] , int l , int r, int x){
	int ans=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			ans=m;
			r=m-1;
		}
		else if(a[m] > x) r=m-1;
		else l=m+1;
	}
	return ans;
}
int main(){
	int n,x; cin >> n >> x;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	cout << first(a,0,n-1,x) << endl;
}

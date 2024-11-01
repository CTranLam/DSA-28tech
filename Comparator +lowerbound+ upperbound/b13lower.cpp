#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int last(int a[] , int l , int r, int x){
	int ans=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m] <= x){
			ans=a[m];
			l=m+1;
		}
		else r=m-1;
	}
	return ans;
}
int main(){
	int n,x ; cin >> n >> x;
	int a[n];
	for(int i=0 ; i< n ; i++){
		cin >> a[i];
	}
	if(last(a,0,n-1,x) != -1) cout << last(a,0,n-1,x);
	else cout << "NOT FOUND" <<endl;
}

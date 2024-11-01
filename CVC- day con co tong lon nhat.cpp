#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll crossing_sum(int a[],int l,int m,int r){
	ll sumr=0,max_sumr=0;// ktao max=0 de k nhan gia tri am
	ll suml=0,max_suml=0;
	// crossing sum la tong gia nen i phai chay tu m nguoc ve 2 ben de dam bao tinh lien tuc 
	for(int i=m ; i>=l ; i--){
		suml+=a[i];
		max_suml=max(suml,max_suml);
	}
	for(int i=m+1 ; i<=r ; i++){
		sumr+=a[i];
		max_sumr=max(sumr,max_sumr);
	}
	return max_sumr+max_suml;
}
ll solve(int a[],int l ,int r){
	int m=(l+r)/2;
	if(l==r) return a[l];
	// return ve ans la max cua left,right or crossing
	return max({
		solve(a,l,m),
		solve(a,m+1,r),
		crossing_sum(a,l,m,r)
	});
}
//5
//-3 6 1 -3 6
//10
int main(){
	int n;cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	cout << solve(a,0,n-1) <<endl;
}

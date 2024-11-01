#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n, ll m , ll k){
	ll ans=1; // so luong mang con
	ll sum=0; 
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
		if(sum>m){
			ans++;
			sum=a[i];
		}
	}
	return ans<=k;
}
int main(){
	int n;ll k; cin >> n >> k;
	int a[n];
	for(int i=0 ;i<n ; i++){
		cin  >> a[i];
	}
	ll l=*max_element(a,a+n);
	ll r=accumulate(a,a+n,0ll); // 0ll khoi tao tong bat dau
	ll res=0;
	while(l<=r){
		ll m=(l+r)/2; // gia tri toi da cua mang con
		if(check(a,n,m,k)){
			res=m;
			r=m-1; // giam tong de thu dc ket qua tot hon
		}
		else l=m+1; // tang tong de giam so luong mang con 
	}
	cout << res << endl;
}

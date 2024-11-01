#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n , int k , double len){
	ll ans=0;
	for(int i=0 ; i<n ; i++){
		ans+=(int)(a[i]/len);
	}
	return ans >=k;
}
int main(){
	int n,k; cin >> n>>k;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	double l=0,r=1e9; // chieu dai chay nhi phan
	double ans=0; // chieu dai dai nhat co the cat
	for(int i=0 ; i< 80 ; i++){ // do ket qua double k phai int
		double m=(l+r)/2;
		if(check(a,n,k,m)){
			ans=m;
			l=m;
		}
		else r=m;
	}
	cout << fixed << setprecision(6) << ans << endl;
}

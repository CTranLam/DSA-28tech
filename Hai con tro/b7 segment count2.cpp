#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s; cin >> n >> s;
	ll a[n];
	for(int i=0 ; i<n ;i++){
		cin >> a[i];
	}
	ll ans=0;
	ll sum=0 ;
	int l=0;
	for(int i=0 ; i<n ; i++){
		sum+=a[i];
		if(sum >= s){
			ans+=n-i;
			sum=0;
			i=l;
			++l;
		}
	}
	cout << ans <<endl;
}

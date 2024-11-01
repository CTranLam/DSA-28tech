#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt(int n){
	ll ans=1;
	for(int i=1 ; i<=n ; i++){
		ans*=i;
	}
	return ans;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll ans=0;
		int n,b,t,c;
		cin >> n >> b >> t >> c;
		for(int i=b ; i<n ; i++){
			for(int j=t ; j<n ; j++){
				for(int k=c; k<n ; k++){
					if(i+j+k==n){
						ll res=(ll)gt(i)*gt(j);
						ans+=gt(n)/((ll)res*gt(k));
					}
				}
			}
		}
		cout << ans <<endl;
	}
}

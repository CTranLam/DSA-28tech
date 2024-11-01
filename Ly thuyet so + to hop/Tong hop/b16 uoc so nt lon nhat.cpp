#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ans=0;
		for(int i=2 ; i<=sqrt(n) ; i++){
			while(n%i==0){
				ans=i;
				n/=i;
			}
		}
		if(n>1) ans=n;
		cout << ans << endl;
	}
}

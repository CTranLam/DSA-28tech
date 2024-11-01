#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	int ans=0;
	for(int i=1 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			ans++;
			if(i!=n/i) ans++;
		}
	}
	cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int x=28;
	int n; cin >> n;
	ll ans=1;
	for(int i=0 ; i<n ; i++){
		ans*=x%100;
		ans%=100;
	}
	cout << ans <<endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	int a,b;
	cin >> a >> b;
	ll ans=1;
	for(int i=0 ; i<b; i++){
		ans*=a%MOD;
		ans%=MOD;
	}
	cout << ans << endl;
}

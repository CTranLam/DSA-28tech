#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int main(){
	string n;ll m;
	cin >> n >> m;
	ll sum=0;
	for(int i=0 ; i<=n.size()-1 ; i++){
		sum=sum*10+(n[i]-'0');
		sum%=MOD;
	}
	ll  ans=pow(sum,m);
	ans%=MOD;
	cout << ans;
}

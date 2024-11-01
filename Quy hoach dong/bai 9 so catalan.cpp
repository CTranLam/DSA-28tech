#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll c[1005];
void catalan(){
	c[0]=1;
	c[1]=1;
	for(int i=2 ; i<=1000 ; i++){
		for(int j=0 ; j<=i-1 ; j++){
			int k=i-j-1;
			c[i]+=c[j]*c[k];
			c[i]%=MOD;
		}
	}
}
int main(){
	catalan();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << c[n] << endl;
	}
}

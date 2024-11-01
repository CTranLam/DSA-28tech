#include<bits/stdc++.h>
using namespace std;
typedef long ll;
ll f[100000];
const int MOD=1e9+7;
int main(){
	f[1]=1;
	f[2]=1;
	for(int i=3 ; i<=100000; i++){
		f[i]=2*f[i-1]+3*f[i-2];
		f[i]%=MOD;
	}
	int n; cin >> n;
	cout << f[n] <<endl;
}

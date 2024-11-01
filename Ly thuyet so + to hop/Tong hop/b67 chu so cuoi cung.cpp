#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll binpow(int a,int b){
	if(b==0) return 1;
	ll t=binpow(a,b/2);
	if(b%2==0) return (t%10*t%10)%10;
	else return (t%10*(t%10*a%10)%10)%10;
}
int main(){
	int p,x; cin >> p >> x;
	cout << binpow(p,x) << endl;
}

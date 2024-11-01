#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumc(ll n){
	if(n==0) return 0;
	else{
		int x=n%10;
		if(x%2==0) return x+sumc(n/10);
		else return sumc(n/10);
	}
}
ll suml(ll n){
	if(n==0) return 0;
	else{
		int x=n%10;
		if(x%2==1) return x+suml(n/10);
		else return suml(n/10);
	}
}
int main(){
	ll n; cin >> n;
	cout << sumc(n) << " "<< suml(n) << endl;
}

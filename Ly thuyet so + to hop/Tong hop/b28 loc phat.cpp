#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(ll n){
	while(n){
		int x=n%10;
		if(x != 0 && x!=6 && x!=8) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	ll n; cin >> n;
	if(check(n)) cout <<1 <<endl;
	else cout <<0 <<endl;
}

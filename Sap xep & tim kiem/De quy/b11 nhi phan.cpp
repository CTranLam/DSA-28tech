#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void np(ll n){
	if(n==0){
		return;
	}
	else{
		np(n/2);
		cout << n%2;
	}
}
int main(){
	ll n; cin >> n;
	if(n==0) cout << 0;
	else{
		np(n);
	}
}

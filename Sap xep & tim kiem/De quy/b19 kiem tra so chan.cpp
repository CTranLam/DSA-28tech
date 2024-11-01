#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n){
	if(n==0) return 1;
	else{
		int x=n%10;
		if(x%2==1) return 0;
		else return check(n/10);
	}
}
int main(){
	ll n; cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO";
}

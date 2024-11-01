#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt(ll n){
	if(n<10) return n;
	else return cnt(n/10);
}
int main(){
	ll n; cin >> n;
	cout << cnt(n) << endl;
}

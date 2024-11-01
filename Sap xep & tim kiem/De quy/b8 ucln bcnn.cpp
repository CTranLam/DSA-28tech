#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
ll lcm(int a,int b){
	return (ll)a/gcd(a,b) * b;
}
int main(){
	ll a,b; cin >> a >>b;
	cout << gcd(a,b) <<" "<<lcm(a,b) << endl;
}

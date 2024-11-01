#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a,x,y;
	cin >> a >> x >> y;
	ll p=0,q=0;
	for(int i=0 ; i<x ; i++){
		p=p*10+a;
		p%=a;
	}
	for(int i=0 ; i<y ; i++){
		q=q*10+a;
		q%=a;
	}
	cout<<__gcd(q,p);
}

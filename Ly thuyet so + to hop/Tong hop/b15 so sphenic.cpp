#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n){
	int luot=0;
	for(int i=2 ; i<= sqrt(n) ; i++){
		int mu=0;
		while(n%i==0){
			++mu;
			n/=i;
		}
		if(mu != 0) ++luot;
		if(mu>1) return 0;
	}
	if(n>1) ++luot;
	if(luot==3) return 1;
	else return 0;
}
int main(){
	ll n;
	cin >> n;
	if(check(n)) cout << 1 << endl;
	else cout << 0 << endl;
}

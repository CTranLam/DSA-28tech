#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void tlp(ll n){
	if(n==0) return;
	else{
		tlp(n/16);
		int x=n%16;
		if(x<10) cout << x;
		else{
			if(x==10) cout <<'A';
			if(x==11) cout << 'B';
			if(x==12) cout << 'C';
			if(x==13) cout << 'D';
			if(x==14) cout << 'E';
			if(x==15) cout << 'F';
		}
	}
}
int main(){
	ll n; cin >> n;
	tlp(n);
}

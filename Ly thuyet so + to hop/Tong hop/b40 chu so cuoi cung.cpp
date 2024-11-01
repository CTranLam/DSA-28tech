#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll powmod(ll a , ll b){ // luy thua nhi phan
	int res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=10;
		}
		b/=2;
		a*=a; // chia b 2 phai binh phuong a len
		a%=10;
	}
	return res;
}
int main(){
	ll n; cin >> n;
	cout <<powmod(1378,n) << endl;
}
